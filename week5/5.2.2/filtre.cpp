#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i]< t){
            vout.push_back(vin[i]);
        }
    }

}

int main(){
    std::vector<double> v;
    int n;
    double t;
    std::cout << "enter n: " << std::endl;
    std::cin >> n;
    std::cout << "enter t: " << std::endl;
    std::cin >> t;
    double x;
    for(int i = 0; i < n; i++){
        std::cout << "enter int for n: " << std::endl;
        std::cin >> x;
        v.push_back(x);
    }
    std::vector<double> vo;
    filter_v(v, t , vo);
    for(int j = 0; j < vo.size(); j++){
        std::cout << vo[j] << " ";
    }
}
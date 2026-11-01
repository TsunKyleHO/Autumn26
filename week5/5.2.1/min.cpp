#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.size() == 0){
        return -1;
    }
    int min = 0;
    if(vin.size() > 0){
        
        for (int i = 1; i < vin.size(); i++){
            if(vin[i] < vin[min]){
                min = i;
            }
        }
        
    }
    return min;


}

int main(){
    std::vector<double> v;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        double m;
        std::cout << "enter number: " << std::endl;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "the min is: " << min_vector_element(v) << std::endl;
}
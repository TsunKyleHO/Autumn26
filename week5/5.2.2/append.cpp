#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
        
    }
    for(int j = 0; j < vin2.size(); j++){
        vout.push_back(vin2[j]);

    }
    
}

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    int n, m;
    std::cout << "enter n: " << std::endl;
    std::cin >> n;
    std::cout << "enter m: " << std::endl;
    std::cin >> m;
    int x, y;
    for(int i = 0; i < n; i++){
        std::cout << "enter int for n: " << std::endl;
        std::cin >> x;
        v1.push_back(x);
    }
    for(int j = 0; j < m; j++){
        std::cout << "enter int for m: " << std::endl;
        std::cin >> y;
        v2.push_back(y);
    }
    std::vector<int> vo;
    append_vectors(v1,v2,vo);

    for(int y = 0; y < vo.size(); y++){
        std::cout << vo[y] << " ";
    }
    
    
    

}
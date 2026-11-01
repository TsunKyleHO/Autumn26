#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(n == vin[i]){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n, t;
    std::cin >> n >> t;
    std::vector<int> v;
    for(int i = 0; i < t; i++){
        int m;
        std::cout << "enter number: " << std::endl;
        std::cin >> m;
        v.push_back(m);
    }
    std::cout << "the index is: " << search_vector(n, v) << std::endl;

}
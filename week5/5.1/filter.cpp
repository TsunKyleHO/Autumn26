#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> v;
    std::cin >> n;
    int c=1;
    for(int i = 0; i < n; i++){
        std::cout << "enter a number: " << std::endl;
        std::cin >> c;
        v.push_back(c);

    }
    int t;
    std::cout << "enter value for t; " << std::endl;
    std::cin >> t;
    std::cout << "number less than t: " << std::endl;
    for(int j = 0; j < n; j++){
        if(v[j] < t){
            std:: cout << v[j] << ", ";
        }
        std::cout << std::endl;



    }
}
#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if ((n%cf)==0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n;
    std::cout << "enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "smallest factor: " << smallest_factor(n) << std::endl;
}
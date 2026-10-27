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
    int x, y;
    std::cin >> x >> y;
    for(int r = x; r <= y; r++){
        if(smallest_factor(r) == 0){
            std::cout << r << std::endl;
        }

    }
}
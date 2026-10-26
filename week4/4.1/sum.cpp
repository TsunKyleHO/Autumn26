#include <iostream>



double mypow(double base, int exp){
    double result = 1;
    if(exp < 0){
        result = 1/base;
        double x = 1/base;
        for(int i = 1; i < -exp; i++){
            result = result*x;
        }
    }

    if(exp >= 0){
        result = base;
        for(int i = 1; i < exp; i++){
            
            result = result*base;
        }
    }
    return result;
}


int main(){
    double x, n;
    std::cout << "enter x: " << std::endl;
    std::cin >> x;
    std::cout << "enter n: " << std::endl;
    std::cin >> n;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x, i);

    }
    std::cout << sum << std::endl;
}
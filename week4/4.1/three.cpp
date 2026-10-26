#include <iostream>

int maxi(int a, int b, int c){
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    return max;
}

int main(){
    int a, b,c;
    std::cout << "enter a, b, c: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "max = " << maxi(a, b, c) << std::endl;
}
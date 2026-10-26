#include <iostream>

void div(int& x, int& y, int& ans, int& remainder){
    ans = x/y;
    remainder = x%y;

    
}

int main(){
    int a, b;
    std::cin >> a >> b;
    int c;
    int d;
    div(a, b, c, d);
    std::cout << "quotient: " << c << "remainder: " << d << std::endl;
    

}
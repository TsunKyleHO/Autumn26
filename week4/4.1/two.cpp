#include <iostream>

int max(int a, int b){
    if (a < b){
        return b;
    }
    if (a > b){
        return a;

    }
    else{
        return 1;
    }
}

int main(){
    int x, y;
    std::cout << "enter x;" << std::endl;
    std::cin >> x;
    std::cout << "enter y;" << std::endl;
    std::cin >> y;
    std::cout << "larger number: " << max(x,y) << std::endl;

}
#include <iostream>

int main(){
    int n, curmax;
    int i = 0;
    std:: cout << "enter a number: " << std::endl;
    std:: cin >> n;
    curmax = n;
    while(n > 1){
        if(n%2 == 0){
            n = n/2;
        }
        else if(n%2 == 1){
            n = 3*n +1;
        }
        if(curmax < n){
            curmax = n;
        }
        std:: cout << n << " ";
        i++;
    }
    std:: cout << std::endl << "step: " << i << std::endl << "maxcur: " << curmax << std::endl;
}
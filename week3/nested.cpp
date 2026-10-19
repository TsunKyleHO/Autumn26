#include <iostream>

int main(){
    int n;
    std:: cin >> n;
    for(int i = 1; i <= n; i++){
        for(int y = 0; y < n; y++){
            int x = y;
            x = i + i*y;
            std:: cout << x << "\t";
            
        }
        std:: cout << std:: endl;
    }
    std:: cout << std:: endl;

}
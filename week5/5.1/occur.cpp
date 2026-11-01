#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> v;
    std::cout << "please enter n: " << std::endl;
    std::cin >> n;
    int c=1;
    for(int i = 0; i < n; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> c;
        v.push_back(c);

    }
    int s;
    std::cout << "enter value for s: " << std::endl;
    std::cin >> s;
    int d = 0;
    for(int j = 0; j < n; j++){
        if(v[j] == s){
            d++;
        }
        
    }
    if(d == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else{
        std::cout << "there are " << d << " occerences of " << s << " at indices:" << std::endl;
        for(int j = 0; j < n; j++){
            if(v[j] == s){
            std::cout << j << std::endl;
            }
        
        }
    }

}
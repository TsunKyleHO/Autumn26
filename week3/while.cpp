#include <iostream>

int main(){
    std::string str;
    
    std::cin >> str;

    while((str != "STOP") && (str != "Stop") && (str != "stop")){
        std::cout << str << std::endl;
        std::cin >> str;
    }
}
#include <iostream>

int main(){
    double w, h, BMI;
    std::cout << "please enter the your height" << std::endl;
    std::cin >> h;

    std::cout << "please enter your weight" << std::endl;
    std::cin >> w;
    BMI = w/(h*h);
    std::cout << "BMI: " << BMI << std::endl;

}
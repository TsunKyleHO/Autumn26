#include <iostream>

void are(double& x, double& y, double& area, double& perimeter){
    area =  x*y;
    perimeter = 2*(x+y);
}

int main(){
    double x, y;
    std::cout << "enter x, y: " << std::endl;
    std::cin >> x >> y;
    double area;
    double perimeter;

    are(x, y, area, perimeter);
    std::cout << "area: " << area << "perimeter: " << perimeter << std::endl;
}
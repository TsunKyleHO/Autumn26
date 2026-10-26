#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)
void myswap(double& a, double& b){
    double t;
    t = a;
    a = b;
    b = t;
}
void sort_two_numbers(double& s1, double& s2, double& s3){
    while(s2 < s1){
        myswap(s1, s2);

    }
    while(s3 < s2){
        myswap(s3, s2);
    }
    while(s2 < s1){
        myswap(s1, s2);

    }
    
    
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_two_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}
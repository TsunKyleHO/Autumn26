//#include <iostream>

//int main(){
    //std::string str;
    
    //std::cin >> str;

    //while((str != "STOP") && (str != "Stop") && (str != "stop")){
        //std::cout << str << std::endl;
        //std::cin >> str;
    //}
//}

//#include <iostream>

//int main(){
    //int n, sum = 0;
    //double average, times = 0.0;
    //std::cout << "enter a number:" << std::endl;
    //std:: cin >> n;

    //while(n != 0){
        //times = times + 1.0;
        //sum = sum + n;
        //average = (sum)/times;

        //std:: cout << "the average so far is:" << std:: endl;
        //std:: cout << average << std:: endl;
        //std::cout << "enter a number:" << std::endl;
        //std:: cin >> n;
    //}

//}

#include <iostream>
int main(){
    int a, b;

    std:: cout << "enter a" << std:: endl;
    std:: cin >> a;
    std:: cout << "enter b" << std:: endl;
    std:: cin >> b;

    while(a >= b){
        a = a - b;
    }
    std:: cout << "the remainder is:" << a << std:: endl;
}
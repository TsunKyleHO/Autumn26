//#include <iostream>

//int main(){
  //  int n, x;
    //std:: cin >> n >> x;
    //int y = 1;
    //for(int i = 0; i < n; i++){
      //  y = x*y;
    //}
    //std:: cout << y << std::endl;
//}

#include <iostream>

int main(){
    int n;
    std:: cin >> n;
    int y = n;
    for(int i = 1; i < n; i++){
        y = y * (n - i);

    }
    std::cout << y << std::endl;
}
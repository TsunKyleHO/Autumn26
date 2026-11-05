#include <iostream>
#include <fstream>
#include <cstdlib>


int main(){
    std::ifstream infile;
    std:: string n;
    std::cout << "enter file name: " << std::endl;  
    std::cin >> n;
    infile.open(n);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
      

    }

    
    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}
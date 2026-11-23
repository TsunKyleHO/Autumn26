#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(int argc, char* argv[]){

    if(argc != 2){
        return 0;
    }
    else{
        std:: vector<std:: string> v;
        std::ifstream infile;
        infile.open(argv[1]);
        std:: string tmp;
        while(infile >> tmp){
            v.push_back(tmp);

        }
        for (int i = 0; i < v.size(); i++){
            std:: cout << v[i] << std:: endl;
        }


 
    }
}
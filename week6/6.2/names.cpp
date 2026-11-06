#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    std::vector<int> v;
    int tmp;
    while(infile >> tmp){
        v.push_back(tmp);

    }
    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;
    std::ofstream outfile;
    outfile.open(outputfilename);
    for(int i = v.size()-1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }
    


}
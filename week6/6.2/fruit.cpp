#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 


int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(s == vin[i]){
            return i;
        }


    }
    return -1;
    
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) == -1){
            vout.push_back(vin1[i]);
        }
        
    }
    for (int j = 0; j < vin2.size(); j++){
        if(search_vector(vin2[j], vout) == -1){
            vout.push_back(vin2[j]);
        }
    }
    std::ofstream outfile;
    outfile.open("union.txt");
    for (int y = 0; y < vout.size(); y++){
        outfile << vout[y] << std::endl;
    }



}



void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        }
        
    }
    
    std::ofstream outfile;
    outfile.open("intersection.txt");
    for(int y = 0; y < vout.size(); y++){
        outfile << vout[y] << std::endl;
    }
    
    
}



int main(){
    std::string w1;
    std::cout << "enter file name for w1: " << std::endl;
    std::cin >> w1;
    std::ifstream infile1;
    infile1.open(w1);
    std::vector<std::string> v1;
    std::string tmp1;
    while (infile1 >> tmp1){
        v1.push_back(tmp1);
    }
    std::string w2;
    std::cout << "enter file name for w2: " << std::endl;
    std::cin >> w2;
    std::ifstream infile2;
    infile2.open(w2);
    std::vector<std::string> v2;
    std::string tmp2;
    while (infile2 >> tmp2){
        v2.push_back(tmp2);
    }
    std::vector<std::string> vo1;
    std::vector<std::string> vo2;
    union_vector(v1, v2,vo1);
    intersection_vector(v1, v2, vo2);

}
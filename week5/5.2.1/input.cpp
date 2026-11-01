//#include <iostream>
//#include <vector>

// maybe not the most efficient way:
//double sum_vector(std::vector<double> vin){

  //  double sum = 0;

    //for(int i = 0; i < vin.size(); i++){
     //   sum = sum + vin[i];
    //}

    //return sum;

//}

//int main(){
  //  std::vector<double> v;
   // int n;
    //for(int i = 0; i < n; i++){
      //  std::cout << "enter n: " << std::endl;
       // std::cin >> n;
        //v.push_back(n);
    //}

    //std::cout << "the sum is: " << sum_vector(v) << std::endl;

//}

#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;
    vin[0] = 2;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
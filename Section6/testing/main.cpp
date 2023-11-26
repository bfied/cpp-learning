#include <iostream>
  
#include <bitset>


int main(){
    unsigned short int exam_score{55};


    long long people_in_florida{20612124};   

    std::cout << people_in_florida << std::endl;
    std::cout << std::bitset<32>(people_in_florida)<< std::endl;

    return 0;
}
#include <iostream>
#include <cmath>

//I expect the program to print:
//8
//0.25
//1
//2
//1/2
//after each of the strings on each line

int main(){
    std::cout << "2^3: " << std::pow(2, 3) << std::endl;
    std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;
    std::cout << "1^0: " << std::pow(1, 0) << std::endl;
    std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;
    std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; 
}
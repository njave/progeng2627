#include <iostream>

int main(){
    double base, power, output;



    std::cout << "type in the base and power of number in the format x x:\n";
    std::cin >> base >> power;

    output = base;

    for(int i = 0; i < power - 1; i++){
        output = output * base;

    }

    std::cout << output << std::endl;



}
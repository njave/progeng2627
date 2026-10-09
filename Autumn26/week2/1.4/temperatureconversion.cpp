#include <iostream>

int main(){
    double temp_C, temp_F;

    std::cout << "temperature in celsius:\n";
    std::cin >> temp_C;

    temp_F = temp_C * 1.8 + 32;
    std::cout << "temperature in fahrenheit is " << temp_F;
}
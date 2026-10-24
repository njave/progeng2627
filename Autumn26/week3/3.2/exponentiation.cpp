<<<<<<< HEAD
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



=======
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



>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
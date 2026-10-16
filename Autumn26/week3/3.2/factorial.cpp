#include <iostream>

int main(){
    double n, output = 1;

    std::cout << "Enter a number:\n";

    std::cin >> n;


    for(double i = n; i > 0; i = i - 1){
        output = output * i;

    }


    std::cout << output << std::endl;


}
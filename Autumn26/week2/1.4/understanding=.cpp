#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;

    // prints 3, c still has the value a + b assigned to it when a = 1 and b = 2

    c = a + b;

    std::cout << c << std::endl;

    // prints 4, as c now has the value a + b assigned to it with a = 2 and b = 2
}
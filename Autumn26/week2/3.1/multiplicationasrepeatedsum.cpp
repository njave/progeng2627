#include <iostream>

int main(){

    double x, x_out;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        x_out = x_out + x;
        counter = counter + 1;
    }

    std::cout << x << " * " << n <<  " = " << x_out << std::endl;

}
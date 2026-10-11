#include <iostream>

int main(){
    int dividend, divisor, acc, count = 0;
    //acc = accumulator


    std::cin >> dividend >> divisor;

    acc = dividend;


    while(acc >= divisor){
        count += 1;
        acc -= divisor;
        
    }

    std::cout << "the quotient is " << count << std::endl;
    std::cout << "the remainder is " << acc << std::endl;


}
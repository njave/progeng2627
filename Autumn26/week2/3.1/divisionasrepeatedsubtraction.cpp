<<<<<<< HEAD
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


=======
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


>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
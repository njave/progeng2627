<<<<<<< HEAD
#include <iostream>

int main(){
    int n, n_out;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0){
        n_out += n;
        std::cout << "the sum so far is: " << std::endl << n_out << std::endl;
        
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
=======
#include <iostream>

int main(){
    int n, n_out;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0){
        n_out += n;
        std::cout << "the sum so far is: " << std::endl << n_out << std::endl;
        
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
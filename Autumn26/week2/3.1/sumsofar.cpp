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
}
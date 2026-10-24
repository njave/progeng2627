<<<<<<< HEAD
#include <iostream>

int main(){
    double n, n_out, count = 0;
    double average;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0){
        n_out += n;
        count += 1;
        average = n_out / count;

        std::cout << "the average so far is: " << std::endl << average << std::endl;
        
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
=======
#include <iostream>

int main(){
    double n, n_out, count = 0;
    double average;

    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    while(n != 0){
        n_out += n;
        count += 1;
        average = n_out / count;

        std::cout << "the average so far is: " << std::endl << average << std::endl;
        
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
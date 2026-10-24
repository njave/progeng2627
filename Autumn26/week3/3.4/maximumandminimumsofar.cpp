<<<<<<< HEAD
#include <iostream>

int main(){
    int n, curmax, curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;
    // initially the current maximum is 
    // the first number entered

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        // if the current number is greater than the current max...
        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }
        if(n < curmin){
            curmin = n;
        }

        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
        // we print the current maximum in any case 
        // whether or not it was updated in this iteration of the loop
    }

=======
#include <iostream>

int main(){
    int n, curmax, curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;
    // initially the current maximum is 
    // the first number entered

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        // if the current number is greater than the current max...
        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }
        if(n < curmin){
            curmin = n;
        }

        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
        // we print the current maximum in any case 
        // whether or not it was updated in this iteration of the loop
    }

>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
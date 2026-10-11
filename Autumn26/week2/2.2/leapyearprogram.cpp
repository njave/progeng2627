#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if((year % 4) == 0){
        // if a multiple of 4
        if((year % 100) == 0){
            //if a multiple of 100
            if((year % 400) == 0){
                //if a multiple of 400
                std::cout << "is a leap year" << std::endl;
        
            }
            else{
                //if not a multiple of 400
                std::cout << "not a leap year" << std::endl;
            }
        }
        else{
            //if not a multiple of 100 but a multiple of 4
            std::cout << "is a leap year" << std::endl;
        }
    }
    else{
        //if not a multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}
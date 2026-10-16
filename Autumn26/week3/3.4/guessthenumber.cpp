#include <iostream>
#include <string>

int main(){
    int upper, lower, guess;
    std::string higher_lower;

    std::cout << "write your upper value\n";
    std::cin >> upper;
    std::cout << "write your lower value\n";
    std::cin >> lower;
    bool guessed = false;
    
    while(guessed == false){
        guess = lower + (upper - lower)/2;

        std::cout << "my guess is: " << guess << std::endl;
        std::cout << "is it higher, lower, or the number\n";

        std::cin >> higher_lower;


        if(higher_lower == "higher"){
            lower = guess;
        }
        else if(higher_lower == "lower"){
            upper = guess;
        }
        else if(higher_lower == "number"){
            std::cout << "yay" << std::endl;
            guessed = true;
        }

    }
        
    

 }
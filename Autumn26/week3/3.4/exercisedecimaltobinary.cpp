<<<<<<< HEAD
//exercise: take the input of a decimal and convert it to binary, exercise to be made using a while loop

#include <iostream>
#include <string>

int main(){
    int input;
    std::cout << "input your decimal number:\n";
    std::cin >> input;
    std::string output;

    while(input != 0){
        output = std::to_string(input % 2) + output;
        input = input/2;


    }

    std::cout << "binary equivalent is: " << output << std::endl;
    

}

=======
//exercise: take the input of a decimal and convert it to binary, exercise to be made using a while loop

#include <iostream>
#include <string>

int main(){
    int input;
    std::cout << "input your decimal number:\n";
    std::cin >> input;
    std::string output;

    while(input != 0){
        output = std::to_string(input % 2) + output;
        input = input/2;


    }

    std::cout << "binary equivalent is: " << output << std::endl;
    

}

>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
//now make it using a for loop
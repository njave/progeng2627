#include <iostream>
#include <string.h>

void myswap(std::string& a, std::string& b){
    std::string temp = a;
    a = b;
    b = temp;

}

int main(){
    std::string stringa, stringb;
    std::cout << "Write down two strings to swap:\n";
    std::cin >> stringa >> stringb;

    std::cout << "string 1 is: " << stringa << std::endl;
    std::cout << "string 2 is: " << stringb << std::endl;

    myswap(stringa, stringb);

    std::cout << "string 1 is: " << stringa << std::endl;
    std::cout << "string 2 is: " << stringb << std::endl;

}
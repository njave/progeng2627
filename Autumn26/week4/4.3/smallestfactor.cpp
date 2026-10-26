#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
            //...it means we have found a factor!
        }
        
    } 

    return 0;
}

int main(){
    std::cout << "Write down a number which returns the smallest common factor, or 0 if prime" << std::endl;
    int number;
    std::cin >> number;
    std::cout << smallest_factor(number);
}


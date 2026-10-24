#include <iostream>
#include <cmath>

double mypow(double base, int exp);

int main(){
    int n, x, sum = 0;
    std::cout << "write down x and n: \n";
    std::cin >> x >> n;

    for(int i = 1; i < n + 1; i++){
        sum += mypow(x, i);
    }

    std::cout << sum << std::endl;


}

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    if(exp > 0){
        for(int i = 0; i < exp; i++){
            result *= base;
        }

        return result;
    }
    else{
        for(int i = 0; i > exp; i--){
            result *= 1/base;
        }

        return result;
    }    
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

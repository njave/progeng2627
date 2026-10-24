<<<<<<< HEAD
// first version, not the most efficient one
#include <iostream>
#include <math.h>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //break;

            //to do without breaking just set cf = n
            cf = n;

            //modification - break the loop if i find a factor
            //...it means we have found a factor!
        }
        //smallest needed factor to go up to is sqrt(n)
        if(cf > std::sqrt(n)){
            //break;
            cf = n;
        }


    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
=======
// first version, not the most efficient one
#include <iostream>
#include <math.h>

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //break;

            //to do without breaking just set cf = n
            cf = n;

            //modification - break the loop if i find a factor
            //...it means we have found a factor!
        }
        //smallest needed factor to go up to is sqrt(n)
        if(cf > std::sqrt(n)){
            //break;
            cf = n;
        }


    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
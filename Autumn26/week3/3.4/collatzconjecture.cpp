<<<<<<< HEAD
#include <iostream>

int main(){
    int starting, steps, max = 0;

    std::cin >> starting;

    while(starting != 1){
        if(starting % 2 == 0){
            steps++;
            starting = starting / 2;
        }
        else{
            steps++;
            starting = 3 * starting + 1;
        }


        if(starting > max){
            max = starting;
        }

        std::cout << starting << std::endl;

    }


    std::cout << "reached in " << steps << " steps.\n";
    std::cout << "the maximum number was " << max << std::endl;
    
    
=======
#include <iostream>

int main(){
    int starting, steps, max = 0;

    std::cin >> starting;

    while(starting != 1){
        if(starting % 2 == 0){
            steps++;
            starting = starting / 2;
        }
        else{
            steps++;
            starting = 3 * starting + 1;
        }


        if(starting > max){
            max = starting;
        }

        std::cout << starting << std::endl;

    }


    std::cout << "reached in " << steps << " steps.\n";
    std::cout << "the maximum number was " << max << std::endl;
    
    
>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
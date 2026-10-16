#include <iostream>

int main(){
    int x, y;

    std::cin >> x >> y;

    int i = 0;
    int j = 0;

    while(i < y){

        while(j < x){
            std::cout << "*";

            j++;
        }

        std::cout << std::endl;
        i++;

    }

}
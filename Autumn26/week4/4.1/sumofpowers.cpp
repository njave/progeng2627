#include <iostream>
#include <cmath>

double myabs(double in);

int main(){
    int n, x, sum = 0;
    std::cout << "write down x and n: \n";
    std::cin >> x >> n;

    for(int i = 1; i < n + 1; i++){
        sum += std::pow(x, i);
    }

    std::cout << sum << std::endl;


}
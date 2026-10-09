#include <iostream>

int main(){
    double weight, height;
    std::cout << "what is your weight in kg?\n";
    std::cin >> weight;

    std::cout << "what is you height in metres\n";
    std::cin >> height;

    double bmi = weight/(height*height);

    std::cout << "your BMI is " << bmi;
}
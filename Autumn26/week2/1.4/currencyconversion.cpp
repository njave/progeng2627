#include <iostream>

int main(){
    double money, euro_exchange_rate;
    std::cout << "amount of money in British Pounds:\n";
    std::cin >> money;

    std::cout << "current exchange rate to Euros from British Pounds:\n";
    std::cin >> euro_exchange_rate;

    double converted_money = money * euro_exchange_rate;

    std::cout << "money in Euros is " << converted_money << std::endl;

}
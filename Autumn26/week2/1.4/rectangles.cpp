#include <iostream>

int main(){
    double side_a, side_b;
    std::cout << "what is length of short side of rectangle" << std::endl;
    std::cin >> side_a;
    std::cout << "what is length of long side of rectangle" << std::endl;
    std::cin >> side_b;

    double perimeter = 2 * (side_a + side_b);
    double area = side_a * side_b;

    std::cout << "perimeter is " << perimeter << " and the area is " << area << std::endl;




}
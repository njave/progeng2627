#include <iostream>
#include <cmath>

int main(){
    //variables representing the sides of triangle
    double a, b, c;

    std::cin >> a >> b >> c;

    //using triangle inequality to check if valid
    if((a + b <= c) || (a + c <= b) || (b + c <= a)){
        std::cout << "not a valid triangle\n";

    }
    //if a valid triangle
    else{
        std::cout << "is a valid triangle\n";

        //check if equalateral
        if((a == b) && (b == c)){
            std::cout << "triangle is equilateral\n";

        }
        //check if isosceles
        else if(((a == b) && !(b == c)) || ((b == c) && !(a == b)) || ((a == c) && !(b == c))){
            std::cout << "triangle is isosceles\n";

        }
        //check if scalene
        else{
            std::cout << "triangle is scalene\n";

        }


        //calculate perimeter
        double perimeter = a + b + c;

        std::cout << "the perimeter is " << perimeter << std::endl;


        //calculate area
        double s = perimeter/2;
        double area = std::sqrt(s*(s-a)*(s-b)*(s-c));

        std::cout << "the area is " << area << std::endl;

    }

    





}
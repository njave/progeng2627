<<<<<<< HEAD
#include <iostream>
#include <string>

    //function that converts temperature from celsius to fahrenheit
    double c_to_f(double temp){
        double temp_out = temp * 1.8 + 32;
        return temp_out;
    }

    double f_to_c(double temp){
        double temp_out = (temp - 32) / 1.8;
        return temp_out;
    }

int main(){
    double temp_in, temp_out;
    std::string units_in, units_out;

    //checks if units are valid, assumed to be true
    bool valid_unit = true;

    std::cin >> temp_in >> units_in;


    if((units_in == "C") || (units_in == "c")){
        //line below would directly output the converted temperature and correct unit
        //std::cout << c_to_f(temp_in) << " F" << std::endl;

        units_out = "F";
        temp_out = c_to_f(temp_in);

    }
    else if((units_in == "F") || (units_in == "f")){
        //std::cout << f_to_c(temp_in) << " C" << std::endl;
        units_out = "C";
        temp_out = f_to_c(temp_in);
    }
    else{
        valid_unit = false;
    }

    //one conditional checked to see what to output to prevent repeated code
    if(valid_unit){
        std::cout << temp_out << " " << units_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }


=======
#include <iostream>
#include <string>

    //function that converts temperature from celsius to fahrenheit
    double c_to_f(double temp){
        double temp_out = temp * 1.8 + 32;
        return temp_out;
    }

    double f_to_c(double temp){
        double temp_out = (temp - 32) / 1.8;
        return temp_out;
    }

int main(){
    double temp_in, temp_out;
    std::string units_in, units_out;

    //checks if units are valid, assumed to be true
    bool valid_unit = true;

    std::cin >> temp_in >> units_in;


    if((units_in == "C") || (units_in == "c")){
        //line below would directly output the converted temperature and correct unit
        //std::cout << c_to_f(temp_in) << " F" << std::endl;

        units_out = "F";
        temp_out = c_to_f(temp_in);

    }
    else if((units_in == "F") || (units_in == "f")){
        //std::cout << f_to_c(temp_in) << " C" << std::endl;
        units_out = "C";
        temp_out = f_to_c(temp_in);
    }
    else{
        valid_unit = false;
    }

    //one conditional checked to see what to output to prevent repeated code
    if(valid_unit){
        std::cout << temp_out << " " << units_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }


>>>>>>> 7a3bd1852948a46f7808035b597d23def7079e67
}
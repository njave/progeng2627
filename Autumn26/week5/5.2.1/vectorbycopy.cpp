#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n_elements;

    std::cout << "How many elements do you want to store in vector?\n";
    std::cin >> n_elements;
    for(int i = 0; i < n_elements; i++){
        double element_input;

        std::cout << "Write down an element\n";
        std::cin >> element_input;
        v.push_back(element_input);

    }


    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
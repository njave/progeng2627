#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    

    if(vin.size() == 0){
        return -1;
    }
    else{
        double smallest = vin[0];
        for(int i = 0; i < vin.size(); i++){
            if(vin[i] < smallest){
                smallest = vin[i];
            }

        }
        return smallest;
    }

}

int main(){

    std::vector<double> v{2, 0, -2.5, -5};

    std::cout << min_vector_element(v);


}
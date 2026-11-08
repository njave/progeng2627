#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){    

    if(vin.size() == 0){
        return -1;
    }

    else{
        for(int i = 0; i < vin.size(); i++){
            if(vin[i] == n){
                return i;
            }

        }
        return -1;
    }

}

int main(){

    std::vector<int> v{0, 0, -2, -5};

    std::cout << search_vector(2, v);


}
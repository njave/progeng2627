#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> v;

    std::cout << "write a number n" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        std::cin >> number;
        v.push_back(number);
    }

    int t;

    std::cout << "write a number for t" << std::endl;
    std::cin >> t;

    for(int i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }

}
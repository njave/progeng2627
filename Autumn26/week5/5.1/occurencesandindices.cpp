#include <iostream>
#include <vector>

int main(){
    int n;
    std::vector<int> v, indices;

    std::cout << "write a number n" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        std::cin >> number;
        v.push_back(number);
    }

    int s;
    int count = 0;

    std::cout << "write a number for s" << std::endl;
    std::cin >> s;

    for(int i = 0; i < n; i++){
        if(v[i] == s){
            count += 1;
            indices.push_back(i);

        }
    }

    std::cout << "there are " << count << " occurences of " << s << " at indices:" << std::endl;
    for(int i = 0; i < indices.size(); i++){
        std::cout << indices[i] << std::endl;
    }

}
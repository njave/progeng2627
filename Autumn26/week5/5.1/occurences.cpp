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

    int s;
    int count = 0;

    std::cout << "write a number for s" << std::endl;
    std::cin >> s;

    for(int i = 0; i < n; i++){
        if(v[i] == s){
            count += 1;
        }
    }

    std::cout << "there are " << count << " occurences of " << s << std::endl;


}
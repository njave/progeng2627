#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::ofstream outfile;
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    // onto a different text file

    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = v.size() - 1; i > -1; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();

}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    infile.close();



    std::string outputfilename;

    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;
    std::ofstream outfile;
    outfile.open(outputfilename);

}

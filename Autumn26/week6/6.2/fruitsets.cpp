#include <iostream>
#include <vector>
#include <fstream>


int search_vector(std::string s, const std::vector<std::string>& vin){

    //returns 1 if the string already exists in the passed vector

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == s){
            return 1;
        }
    }
    
    return 0;
}





void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    
    vout.clear();

    for(int i = 0; i < vin1.size(); i++){
        //check if the element already exists in vout
        if(search_vector(vin1[i], vout) == 0){
            vout.push_back(vin1[i]);
        }
    }

    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vout) == 0){
            vout.push_back(vin2[i]);
        }
    }

    
}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    vout.clear();

    for(int i = 0; i < vin1.size(); i++){
        //check if an element in vin1 exists in vin2
        if(search_vector(vin1[i], vin2) == 1){
            vout.push_back(vin1[i]);
        }

        //no need to do it for vin2 because if it element doesn't exist in vin1 there will be no intersection anyways
    }
    
}


int main(){
    std::fstream infile;
    std::string inputfile;
    std::vector<std::string> v1, v2, vout;
    

    //creating the vectors

    std::cout << "Write the name of the first text file for input: \n";
    std::cin >> inputfile;

    infile.open(inputfile);


    std::string tmp;

    while(infile >> tmp){
        v1.push_back(tmp);
    }


    infile.close();

    std::cout << "Write the name of the second text file for input: \n";
    std::cin >> inputfile;


    infile.open(inputfile);


    while(infile >> tmp){
        v2.push_back(tmp);
    }
    

    std::fstream outfile;

    infile.close();

    



    //for union

    union_vector(v1, v2, vout);
    outfile.open("union.txt");


    for(int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
    }

    outfile.close();


    //create intersection.txt file
    intersection_vector(v1, v2, vout);
    outfile.open("intersection.txt");


    for(int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
    }

    outfile.close();



}
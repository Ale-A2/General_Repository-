#include <iostream> // for cout
#include <fstream> // for file operations
#include <sstream> // string stream(to split words)
#include <string> // string type 
#include <vector> // for dynamic arrays 

void disect();

int main(){
    // open file for reading
    std::ifstream file("piece.txt");

    // ifstream is a c++ class from the header fstream used for reading data from files.
    // fstream handles both reading and writing of files. 

    // Check if file opened successfully
    if (!file.is_open()) {
        std::cout << "Error: Could not open file" << std::endl;
        return 1;
    }

    //read entire file into a string
    std::stringstream buffer;

    // text in the file is loaded into the buffer variable
    buffer << file.rdbuf();

    std::string var = buffer.str();

    // std::cout << var << std::endl;

    disect();

    return 0;

}


void disect(){
    std::ifstream file("piece.txt");

    if(!file.is_open()){
        std::cout << "This file is not found in this directory" << std::endl;
        return;
    }

    std::vector<std::string> new_par;
    std::string word;

    while(file >> word){
        if(word.length() > 4){
            new_par.push_back(word);
        }
    }

    for(size_t i = 0; i < new_par.size(); i++){
        std::cout << new_par[i] << " ";
    }

    std::cout << std::endl;

    return;
}
#include "functions.hpp"

std::vector<std::string> filter_sustainable_brands(std::vector<std::unordered_map<std::string,
std::vector<std::string>>> brands, std::string criterion){
    // withing the vector we must find the element in the dictionary that corresponds to the criteria
    std::vector<std::string> res = {};
    for(auto& vector : brands){
        int size_ =  vector["criteria"].size(); // size of the vector inside the criteria
        int i = 0;
        while( i < size_){
            if(vector["criteria"][i] == criterion){
                res.push_back(vector["name"][0]);
            }
            i ++;
        }
    }

        return res;
}



int main(){

    std::vector<std::string> example = filter_sustainable_brands(brands3, "carbon-neutral");
    for(auto& vector : example){
        std::cout << vector << " \n";
    }
    

    return 0;
}
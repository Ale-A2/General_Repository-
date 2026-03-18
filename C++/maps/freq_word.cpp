#include "functions.hpp"
#include <climits>

std::vector<std::string> freq_word(std::vector<std::string> words){
    std::unordered_map<std::string, int> dict;

    int max = -INT_MAX;
    for(auto& wrd : words){
        // use operator[] when insertion is intended, for read only look ups, use count, find, or contains  
        dict[wrd] += 1;
        max = std::max(max, dict[wrd]);
    }

    std::vector<std::string> res;

    for(auto dc:dict){
        if(dc.second == max){
            res.push_back(dc.first);
        }
    }

    return res;
}

int main(){
    std::vector<std::string> wordle = {"amazon", "couple", "interrogation", "amazon", "ama", "couple", "unique", "solo"};

    wordle = freq_word(wordle);

    std::cout << "[ " ;
    for(auto& elem: wordle){
        std::cout << elem << ", ";
    }
    std::cout << "]\n";

    return 0;
}
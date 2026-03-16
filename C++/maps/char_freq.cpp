// to lower function
#include "functions.hpp"

std::unordered_map<char, int> count_freq(std::string& str){
    // this functions takes a string and return the reference of a map
    // map contains the chars as keys and each of the key values contains how
    // many times that key appears in the string


    std::unordered_map<char,int> dict = {};//empty map declaration

    std::string lower;

    for(char& ch: str){
        lower += std::tolower(ch);
    }

    std::cout << lower << std::endl;
    
    for(char& ch: lower){
        if (dict.find(ch) == dict.end()){ // if the key is not found in the map, we include it
            dict[ch] = 1;
        } else {
            // add one to the count if the character exists in the map
            dict[ch] += 1;
        }
    }

    return dict;
}
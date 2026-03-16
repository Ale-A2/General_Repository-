#include <unordered_map>
#include <iostream>
#include <algorithm>
#include "functions.hpp"

char non_rep(const std::string& str){
    auto inside = str;
    auto map = count_freq(inside);

    char one;
    for(int i = 0; i < str.length() - 1; i++){
        std::cout << str[i] << " i: " << i << std::endl; 
        if(map[str[i]] == 1){
            one = str[i];
            break;
        } 
    }

    return one;
}

// int main(){
//     std::string input = "aabbcddef";

//     std::cout << "Non-repeating char is: " << non_rep(input) << std::endl;

//     return 0;
// }
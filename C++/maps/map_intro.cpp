#include <unordered_map>
#include <iostream>

int main(){
    std::unordered_map<char, int> visual;

    std::string verbose = "aabcabcd";

    for(int i = 0; i < verbose.length(); i++){
        if(visual.find(verbose[i]) == visual.end()){
            visual[verbose[i]] = i;
        }
    }

    for(auto& letter : visual){
        std::cout << letter.first << " " << letter.second <<std::endl; 
    }

    for(auto& letter : visual){
        int right = verbose.length() - 1;
        bool seen = false;
        while(right > letter.second){
            if (letter.first == verbose[right]){
                letter.second = right - letter.second ;
                seen = true;
                break;
            } 
            right --;
        }
        if(!seen){
            letter.second = 0;
        }
    }
    int max = 0;
    for(auto& letter : visual){
        max = std::max(max, letter.second);
    }

    for(auto& letter : visual){
        std::cout << letter.first << " " << letter.second <<std::endl; 
    }

    std::cout << max << std::endl;
    return 0;
}
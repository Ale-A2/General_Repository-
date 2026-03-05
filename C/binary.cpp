#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // how to make chars in string upper (bitwise)
    std::vector<std::string> lines = {"HeLLo", "ThiS", "CoMPilatION", "AcCordance"};

    for(std::string& text : lines){
        char* local = &text[0];

        while(*local != '\0'){
            *local &= 0b11011111;
            local ++;
        }
    }

    for(auto& text : lines){
        std::cout << text << std::endl;
    }

    for(std::string& text : lines){
        char* local = &text[0];

        while(*local != '\0'){
            *local |= 0b100000;
            local ++;
        }
    }

    for(auto& text : lines){
        std::cout << text << std::endl;
    }

    
}
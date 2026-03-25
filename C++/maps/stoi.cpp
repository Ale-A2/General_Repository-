#include <iostream>
#include <cmath>
#include <string>

int main(){
    std::string str = "010235";

    const int BASE = 10;

    int num = 0;
    for(int i = 0; i < str.size();i++){
        char c = str[i];
        std::cout << num << std::endl;
        num = num*BASE + (c - '0');
    }

    std::cout << num;
}
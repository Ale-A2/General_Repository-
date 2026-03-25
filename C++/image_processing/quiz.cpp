#include <iostream> 

int reverse(int binary){
    int result = 0; 
    int count = 32;
    while(count > 0){
        int remainder = 0;
        if (binary != 0){
            remainder = binary % 2;
            binary = binary / 2;
        }
        result = result << 1; 
        result = result | remainder;
        count -= 1;
    }

    return result;
}

int main(){
    int case_ = 8;
    std::cout << reverse(case_) << std::endl;

    return 0;
}
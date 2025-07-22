#include <iostream>

void iteratvice_hello(int num){
    while(num >= 1){
        std::cout << "Hello ";
        num --;
    }
}

int sum_list(int list, int size){   
    return 0;
}

bool is_power_of_two(int num){
    if(num == 1){
        return true;
    }
    else if(num < 1 || (num % 2 != 0)){
        return false;
    } else return is_power_of_two(num/2);
}

int main(){
    iteratvice_hello(5);
    int list[5] = {5,4,3,2,1};
    std::cout << is_power_of_two(30);

}
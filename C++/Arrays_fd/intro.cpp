#include <iostream> 

int main(){
    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 6;j++){
            if(j + i >= 5){
                std::cout << "#";
            }
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
}
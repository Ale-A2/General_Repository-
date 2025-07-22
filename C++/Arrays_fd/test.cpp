#include <iostream> 
#include <cstdlib>
#include <ctime>

int main(){
    int s = 0;
    std::cout << "Choose size of the list";
    std::cin >> s;
    int ar[s][s]; // unitialized list 
    int random = rand() % 100;
    srand(time(0));
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            ar[i][j] = rand() % 100;
            std::cout << ar[i][j] << " || "; 
       }
       std::cout << std::endl;
    }
    // for(int i = 0; i < s; i++){
    //     for(int j = 0; j < s;j++){
    //         if (j == i){
    //             std::cout << "$";
    //         } else if((i + j) == (s -1)){
    //             std::cout << "#";
    //         } else std::cout << " ";
    //     }
    //     std::cout << std::endl;
    // }
    return 0;
}
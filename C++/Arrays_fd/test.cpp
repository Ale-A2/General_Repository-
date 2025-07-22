#include <iostream> 
#include <cstdlib>
#include <ctime>

int main(){
    int s = 0;
    std::cout << "Choose size of the list";
    std::cin >> s;
    int ar[s][s]; // unitialized list 
    srand(time(0));
    // Initialize the entire array
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            ar[i][j] = rand() % 100;
            std::cout << ar[i][j] << " || "; 
       }
       std::cout << std::endl;
    }

    int arr2[16];
    int count = 0;
    for(int i = 0; i < s - 2; i++){
        for(int j = 0; j < s - 2; j++){
            arr2[count] = ar[i][j] + ar[i][j+1] + ar[i][j+2] +     // top row
                         ar[i+1][j+1] +                           // middle center
                         ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2]; // bottom row
            count++;   
       }
       std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    int max = -1000;
    for(int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
        std::cout << arr2[i] << " || "; 
        if(max < arr2[i]){
            max = arr2[i];
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "The max value in the array is: " << max;
    


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
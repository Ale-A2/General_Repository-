#include <iomanip>
#include <iostream>

void selection(int arr[],int size){
    
}
void displayArray(int arr[], int size){
    std::cout << "[ ";
    for(int i = 0; i < size; i++){
        if(i >= size - 1){
            std::cout << arr[i] << " ]";
        } else std::cout << arr[i] << " , ";
    } 
    std::cout << std::endl;
};

int main(){
    const int SIZE = 10;
    int arr[SIZE];
    
    // 2D array declaration
    const int ROWS = 3;
    const int COLS = 3;
    int arr2D[ROWS][COLS];
    
    // Seed random number generator
    srand(time(0));
    
    // Fill array with random values (1-100)
    for(int i = 0; i < SIZE; i++){
        arr[i] = rand() % 100 + 1;
    }
    
    // Fill 2D array with random values (1-100)
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            arr2D[i][j] = rand() % 100 + 1;
        }
    }
}
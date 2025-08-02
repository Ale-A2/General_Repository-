#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>

void insertion(int arr[],int size){
    for(int i = 1; i < size;i++){ //start from object 1
        int key = arr[i];
        int j = i - 1; //stop for the sorted portion

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j]; // swap the element to the left if greater
            j = j -1; // move one element to the left
        }
        arr[j + 1] = key; // when no greater than key, key will be placed one element after the stop
    }
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

    displayArray(arr, SIZE);
    insertion(arr, SIZE);
    displayArray(arr, SIZE);
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

void Bubble(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                //make temp to swap elements 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                //values swaped
            }
        }
    }
};

//passing an array as a copy
void Bubble2D(int* arr, int row, int col){
    
    int total_elem = row * col;
    for(int i = 0; i < total_elem; i++){
        //reset poitner to the initial location
        int* ptr = arr;
        for(int j = 0; j < total_elem; j++){
            if(*ptr > *(ptr + 1)){
            int temp = *ptr;
             *ptr = *(ptr + 1);
             *(ptr + 1) = temp;
            }
            ptr++;
        }
    }
}

void display2DArray(int* arr, int row, int col){
    int* ptr = arr;
    int total_elem = row * col;
    std::cout << "2D Array:" << std::endl;
    for(int i = 0; i < row; i++){
        std::cout << "[ ";
        for(int j = 0; j < col; j++){
            if(j >= col - 1){
                std::cout << *ptr << " ]";
            } else {
                std::cout << *ptr << " , ";
            }
            ptr++;
        }
        std::cout << std::endl;
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
}

int  main(){
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

    // displayArray(arr, SIZE);

    // //sort array
    // Bubble(arr, SIZE);
    
    // //Display sorted array
    // displayArray(arr, SIZE);
    
    std::cout << std::endl;
    
    // Display 2D array
    display2DArray((int*)arr2D, ROWS, COLS);
    
    // Sort 2D array
    Bubble2D((int*)arr2D, ROWS, COLS);
    
    // Display sorted 2D array
    std::cout << "After sorting:" << std::endl;
    display2DArray((int*)arr2D, ROWS, COLS);

    return 0;
}
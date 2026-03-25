#include <iostream>


void take_D2(int** arr, int row, int col){
    // print the grid

    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j ++){
           std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}


int main(){
    int size_ = 10;
    int* array = new int[size_] {5,1,6,7,8,3,7,8,2,9};
    
    for(int i = 0; i < size_ /2; i++){
        int right = size_ - i - 1; 
        int temp = *(array+right);
        *(array + right) =  *(array + i);
        *(array + i) = temp;
    }

    for(int i = 0; i < size_; i++){
        std::cout << *(array + i) << " ";
    }

    std::cout << "\n";

    int** D2 = new int*[2]; 

    for(int i = 0; i < 2; i++){
        D2[i] = new int[5];
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j ++){
            D2[i][j] = (i + 1)*(j + 1);
        }
    }

    take_D2(D2, 2, 5);

    for(int i = 0; i < 2; i++){
        delete[] D2[i];
        D2[i] = nullptr;
    }

    delete D2;
    D2 == nullptr;

    return 0;
}
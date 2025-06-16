#include "matrix.hpp"

matrix2d::matrix2d(){
}

matrix2d::matrix2d(int array_2d[3][3]){
    std::cout << "Parameterized constructor called" << std::endl;
    array = new int*[3];
    for(int i = 0; i < 3;i++){
        array[i] = new int[3];
    }

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array[i][j] = array_2d[i][j];
        }
    }
}

matrix2d::matrix2d(matrix2d&& old_object){
    array = old_object.array;
    old_object.array = nullptr;
}


void matrix2d::print() const {
    std::cout << array << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << array[i][j] << " " << &array[i][j] << " ||";
        }
        std::cout << std::endl;
    }
}
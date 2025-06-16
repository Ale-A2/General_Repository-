#include "matrix.hpp"


int main(){
    int array_test[3][3] = {{1,2,3},
                            {4,5,6},
                            {7,8,9}}; 

    matrix2d matrix1(array_test);

    matrix1.print();

    matrix2d matrix2 = std::move(matrix1);
    matrix2.print();
}
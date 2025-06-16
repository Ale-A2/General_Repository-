#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>

class matrix2d{
     public: 
     matrix2d();
     
     matrix2d(int array_2d[3][3]);

     matrix2d(const matrix2d& old_objec);

    matrix2d(matrix2d&& old_object);

    void print() const;

    private:
    int** array;

};
#endif
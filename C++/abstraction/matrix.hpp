#ifndef MATRIX_HPP
#define MATRIX_HPP

class matrix2d{
     public: 
     matrix2d();
     
     matrix2d(const int& array_2d);

     matrix2d(const matrix2d& old_objec);

    private:
    int** array;

};
#endif
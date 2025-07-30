#ifndef BINARY_NODE   
#define BINARY_NODE

#include <iostream>

template <class T>
class BinaryNode{
    public: 
    BinaryNode(); //default constructor with default values;
    BinaryNode(const T& value); // simple constructor
    BinaryNode(const T& value, BinaryNode* left_child, BinaryNode* right_child); //full constructor
    ~BinaryNode(); //destructor 

    //setters and getters 
    void setValue(const T& value); //write function, read only param;
    T getValue() const; //const read only function

    bool isLeaf() const;

    BinaryNode* getLeftChild() const; //retrives the left child of the current node
    BinaryNode* getRightChild() const;

    void setRightChild(BinaryNode* right_child);
    void setLeftChild(BinaryNode* left_child);

    private:
    BinaryNode* left_child_;
    BinaryNode* right_child_;
    T value_; //The initial class definition will count with a BinaryNode that contains an int, yet it will be modified to hold 
                // items of class T;
    
};
#include "BinaryNode.cpp"
#endif
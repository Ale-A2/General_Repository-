#include "BinaryNode.hpp"
#include <cstddef>

template <class T>
BinaryNode<T>::BinaryNode(): value_{T{}}, left_child_{nullptr}, right_child_{nullptr} {}

template<class T> 
BinaryNode<T>::BinaryNode(const T& value) : value_{value}, left_child_{nullptr}, right_child_{nullptr} {}

template<class T> 
BinaryNode<T>::BinaryNode(const T& value, BinaryNode* left_child, BinaryNode* right_child) :value_{value}, left_child_{left_child} , right_child_ {right_child} {}

template<class T>
T BinaryNode<T>::getValue() const {
    return value_;
}

template <class T>
void BinaryNode<T>::setValue(const T& value){
    value_ = value;
} //write function, read only param;

template<class T>
bool BinaryNode<T>::isLeaf() const{
    if(right_child_ == nullptr || left_child_ == nullptr){
        return true;
    } else return false;
}

template <class T> 
BinaryNode<T>* BinaryNode<T>::getLeftChild() const {
    return left_child_;
}

template <class T>
BinaryNode<T>* BinaryNode<T>::getRightChild() const{
    return right_child_;
}

template <class T>
void BinaryNode<T>::setRightChild(BinaryNode<T>* right_child){
    right_child_ = right_child; 
}

template <class T>
void BinaryNode<T>::setLeftChild(BinaryNode<T>* left_child){
    left_child_ = left_child;
}
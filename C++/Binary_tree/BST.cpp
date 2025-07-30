#include "BST.hpp"

template <class T>
BST<T>::BST(): root_{nullptr} {}

template <class T> 
BST<T>::BST(BinaryNode<T>* root_item): root_{root_item} {}

template <class T> 
bool BST<T>::insert(BinaryNode<T>* item, BinaryNode<T>* root){
    BinaryNode<T>* temp = root_;
    if(temp == nullptr){
        return false; // Indicate failure - should use insertNode instead
    } else if(item -> getValue() < temp -> getValue()){
        if(temp -> getLeftChild() == nullptr){
            temp -> setLeftChild(item);
            return true;
        } else {
            return insert(item, temp -> getLeftChild());
        }
    } else {
        if(temp -> getRightChild() == nullptr){
            temp -> setRightChild(item);
            return true;
        } else {
            return insert(item, temp -> getRightChild());
        }
    }
}

template <class T>
void BST<T>::printNodes(BinaryNode<T>* root) const{
    if(root == nullptr){
        return;
    } 
    std::cout << root -> getValue() << " ";
    printNodes(root -> getLeftChild());
    printNodes(root -> getRightChild());
}

template <class T>
BinaryNode<T>* BST<T>::returnRoot() const{
    return root_;
}

// Better insert method that works with the BST properly
template <class T>
bool BST<T>::insertNode(BinaryNode<T>* item){
    if(root_ == nullptr){
        root_ = item;
        return true;
    } else {
        return insert(item, root_);
    }
}

// Public print method that uses the root_
template <class T>
void BST<T>::print() const{
    if(root_ == nullptr){
        std::cout << "Tree is empty" << std::endl;
        return;
    }
    std::cout << "BST contents: ";
    printNodes(root_);
    std::cout << std::endl;
}
 

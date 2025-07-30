#include "BST.hpp"

template <class T>
BST<T>::BST(): root_{nullptr} {}

template <class T> 
BST<T>::BST(BinaryNode<T>* root_item): root_{root_item} {}

template <class T> 
bool BST<T>::insert(BinaryNode<T>* item, BinaryNode<T>* root){
    if (root == nullptr)
    {
        return false; // Indicate failure - should use insertNode instead
    }
    else if (item->getValue() < root->getValue())
    {
        if(root -> getLeftChild() == nullptr){
            root -> setLeftChild(item);
            return true;
        } else {
            return insert(item, root -> getLeftChild());
        }
    }
    else
    {
        if(root -> getRightChild() == nullptr){
            root -> setRightChild(item);
            return true;
        } else {
            return insert(item, root -> getRightChild());
        }
    }
}

template <class T>
void BST<T>::preOrder(BinaryNode<T>* root) const{
    if(root == nullptr){
        return;
    } 
    std::cout << root -> getValue() << " ";
    preOrder(root -> getLeftChild());
    preOrder(root -> getRightChild());
}

template <class T>
void BST<T>::inOrder(BinaryNode<T>* root) const{
    if(root == nullptr){
        return;
    } 
    inOrder(root -> getLeftChild());
    std::cout << root -> getValue() << " ";
    inOrder(root -> getRightChild());
}

template <class T>
void BST<T>::postOrder(BinaryNode<T>* root) const{
    if(root == nullptr){
        return;
    } 
    postOrder(root -> getLeftChild());
    postOrder(root -> getRightChild());
    std::cout << root -> getValue() << " ";
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
    inOrder(root_);
    std::cout << std::endl;
    std::cout << std::endl;
    preOrder(root_);
    std::cout << std::endl;
    std::cout << std::endl;
    postOrder(root_);
}
 

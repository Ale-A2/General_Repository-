#include "BinaryNode.hpp"
#ifndef BST_H
#define BST_H
template <class T>
class BST{
    public: 
    BST();
    BST(BinaryNode<T>* root_item);
    bool insert(BinaryNode<T>* item, BinaryNode<T>* root); 
    bool insertNode(BinaryNode<T>* item); // Better insert method
    void printNodes(BinaryNode<T>* root) const;
    BinaryNode<T>* returnRoot() const;

    void print() const; 
    private:
    BinaryNode<T>* root_;
};
#include "BST.cpp"
#endif 
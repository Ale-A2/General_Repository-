#include "BinaryNode.hpp"
#include "BST.hpp"

int main(){
    auto* second = new BinaryNode<int>(10);
    auto* third = new BinaryNode<int>( 100);
    BinaryNode<int>* first = new BinaryNode<int>(80);
    // third -> setLeftChild(second);
    auto* fourth = new BinaryNode<int>(50);
    // third -> setRightChild(fourth);

    //XXXXXXXXXXXXXXXXXXXXXX Printing examples of nodes XXXXXXXXXXXXXXXXXXXXX
    // std::cout << "root: " << first << " value: " << first->getValue() << std::endl  << "right child: ";
    // std::cout << first -> getRightChild() << " value:" << first -> getRightChild() -> getValue() << std::endl;
    // std::cout << "left child: " << first -> getLeftChild() << " value: " << first -> getLeftChild() -> getValue() << std::endl; 
    // std::cout << std::endl;
    
    // std::cout << "second: " << second << " value: " << second->getValue() << std::endl << "right child: ";
    // std::cout << second -> getRightChild() << " left child: " << second -> getLeftChild() << std::endl;
    // std::cout << std::endl;
    
    // std::cout << "third: " << third << " value: " << third->getValue() << std::endl << "right child: ";
    // std::cout << third -> getRightChild() << " value:" << third -> getRightChild() -> getValue() << std::endl;
    // std::cout << "left child: " << third -> getLeftChild() << " value: " << third -> getLeftChild() -> getValue() << std::endl;
    // std::cout << std::endl;
    BST<int>* tree = new BST<int>(first);

    // std::cout << tree -> returnRoot() ; 

    tree -> insert(second, first);
    tree -> insert(third, first);
    tree -> insert(fourth, first);
    // std::cout << tree -> returnRoot() -> getRightChild() -> getValue();

    tree -> printNodes(first);
}
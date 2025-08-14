#include <iostream> 

class BinaryNode {
    public:
    BinaryNode(int value);
    int value; 
    BinaryNode* left_child;
    BinaryNode* right_child; 
};

BinaryNode::BinaryNode(int num){
    value = num;
    left_child = nullptr;
    right_child = nullptr;
}

bool treeSum(BinaryNode* root){
    BinaryNode* temp = root;
    int sum = temp -> left_child -> value + temp -> right_child -> value;

    if(temp -> value == sum){
        std::cout << "The root is equal to the sum of its children" ;
        return true;
    } else std::cout << "Children sum are not equal to the root";
    return false;
}

BinaryNode* findLeftmost(BinaryNode* root){
    BinaryNode* temp = root; 
    if (root -> left_child == nullptr){
        std::cout << "Root alone" << std::endl;
        return temp; //
    }
    while(temp -> left_child != nullptr){
        temp = temp -> left_child; // keep going left
    }
    return temp;
}

int getHeight(BinaryNode* root){
          //Write your code here
          if(!root){
            return 0;
          } else {
            int left_height = getHeight(root -> left_child);
            int right_height = getHeight(root -> right_child);
            if(left_height >= right_height){
                return left_height + 1;
            } else return right_height + 1;
          }
        }



int main(){
    BinaryNode* exa = new BinaryNode(10);
    exa->left_child = new BinaryNode(4);
    exa -> right_child = new BinaryNode(6);
    exa->left_child -> left_child = new BinaryNode(3);
     exa->left_child -> left_child-> left_child = new BinaryNode(2);

     BinaryNode* dos = new BinaryNode(7);


    std::cout << exa->value << " " << exa -> left_child -> value << " " << exa -> right_child -> value << std::endl; 

    treeSum(exa);
    std::cout << std::endl << std::endl << "value of the leftmost child: " << findLeftmost(dos) -> value;
}
#include <iostream> 

class Node{
    public: 
    Node();
    Node (int value);
    void insert();
    void shuffle();
    Node* reverse();
    void deleteAtPosition();
    int value_;
    Node* next_;
    
};

Node::Node(){
    value_ = 0;
    next_ = nullptr;
}

Node::Node(int value){
    value_ = value;
    next_ = nullptr;
}

void traverse(Node* head){
    while(head != nullptr){
        if(head -> next_ != nullptr)
        std::cout << head -> value_ << " -> ";
        else{
            std::cout << head -> value_;
        }
        head = head -> next_;
    }
    std::cout << std::endl;
}

/*This functions swaps two values in the linked list*/
void suffle(Node* head){
    Node*  ptr1 = head;         //looking 11st element
    Node* ptr2 = head -> next_; //look 2nd element
    int listcounter = 1;
    // while(ptr1 -> next_ != nullptr){
    //     if(listcounter % 2 == 1){
    //     int temp = ptr1 -> value_;
    //     ptr1 -> value_ = ptr2 -> value_;
    //     ptr2 -> value_ = temp;
    //     }
    //     ptr1 = ptr1 -> next_;
    //     ptr2 = ptr2 -> next_;
    //     listcounter ++;
    // } 

    // while(ptr2 != nullptr){
    //     if(listcounter % 2 == 1){
    //     int temp = ptr1 -> value_;
    //     ptr1 -> value_ = ptr2 -> value_;
    //     ptr2 -> value_ = temp;
    //     std::cout << ptr1 -> value_ << " " << &ptr1 << " -> "<< ptr2 -> value_ <<  " " << &ptr2  << " -> ";
    //     }

    //     ptr1 = ptr1 -> next_ -> next_;
    //     ptr2 = ptr2 -> next_ -> next_;
    //     listcounter += 2;
    // }

    while(ptr1 && ptr2) {
        if(listcounter % 2 == 1) {
            int temp = ptr1->value_;
            ptr1->value_ = ptr2->value_;
            ptr2->value_ = temp;
        }
        // Advance by two nodes, but check for nullptrs
        if(ptr2->next_ && ptr2->next_->next_) {
            ptr1 = ptr1->next_->next_;
            ptr2 = ptr2->next_->next_;
            listcounter += 2;
        } else {
            break;
        }
    }
}

Node* reverse(Node* head){
    Node* cur = head;
    Node* prev = nullptr;
    Node* nxt;

    while(cur != nullptr){
        nxt = cur -> next_;
        cur -> next_ = prev;

        prev = cur;
        cur = nxt;
    }
    return prev;
}

Node* deleteAtPosition(Node* head, int position){
    Node* prev;
    Node* temp = head; 

    if(temp == nullptr){
        return head;
    }

    if(position == 1){
        head = temp -> next_;
        temp = nullptr;
        delete temp;
        return head;
    }
 
    for(int i = 1; i != position; i++){ //traverse the list
        prev = temp;
        temp = temp -> next_;
    }

    if(temp != nullptr){
        prev -> next_ = temp -> next_;
        temp = nullptr;
        delete temp; 
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return head;
}

Node* insert(Node* head, int data) {
    // If the list is empty, create the first node
    if (head == nullptr) {
        return new Node(data);
    }
    
    // Find the last node
    Node* current = head;
    while (current->next_ != nullptr) {
        current = current->next_;
    }
    
    // Add the new node at the end
    current->next_ = new Node(data);
    return head;
}

int main(){
    Node* head = nullptr;  // Start with empty list
    
    // Use insert function to build the list
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);

    traverse(head);

    std::cout << std::endl;

    // reverse(head);
    // suffle(head);
    traverse(reverse(head));

    head = deleteAtPosition(head, 4);

    traverse(head);
}
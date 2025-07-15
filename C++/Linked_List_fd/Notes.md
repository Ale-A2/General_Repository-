# Notes for Linked List
## Linked Lists:
### What are linked lists?
linked List are data structures base in the creation of a *Node*. The Node object has two data members-These are a value(*data held in the node*) and a Node* pointing to the next element. With this one start chaining nodes and they will be held together by a next ptr.

#### Class Declaration
```c++
class Node{
    public:
    Node(); //default constructor;
    Node(<type> value) //Parameterized constuctor
    private: 
    <type> data;
    Node* next_;
}
```

---
### Functions for Linked List
Linked List are a powerful data structure on their own, but by using fuctions to emplement behaviors in them can take their their usablity through the roof. Things such as insert, delete, and traverse are essential functions for any data structure. But we can also get away with some more complicated ones such as: reverse, deleteAtPosition, and contains.

#### Traverse
a simple code that goes through all of the elements until the linked list reaches a nullptr-meaning the last element doesn't exist, thus you have reached the end of the list.

```C++
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
```

### Shuffle
a function that uses a sliding window to change the values inside the linked list. For every two adjacent elements, switch their values. for example 1 -> 2 -> 3 -> 4 **turns into** : 2 -> 1 -> 4 -> 3.
```c++
void suffle(Node* head){
    Node*  ptr1 = head;         //looking 11st element
    Node* ptr2 = head -> next_; //look 2nd element
    int listcounter = 1;

    while(ptr1 && ptr2) { //while both pointer exist
        if(listcounter % 2 == 1) { //counter check to ensure when the swap is done
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
```
**Why do we use this method** if you were to run the pointer without verifying that the leading pointer (*ptr2* is active), you could run into a memory segmentation fault. **Why?** If you are at the end od the list, thus the next element is null. but if you were to make the skip next -> next. means you are going to a location that contains nothing, and from that location you are train to access something. The compiler doesn't allow to access this memory because it thinks it doesn't exist. 

### Reverse
So far the hardest function that I have implemented for a Linked List. It consist in rotating the node next pointer to point backwards. Hear me out, it sound complicated but it is not. The way it works is by creating 3 pointer which we will name *cur, prev, and next*. These will be out *sliding window*. They will keep track of the nodes before and after the pointer we are using to parse the list. 

once the cur is looking at the head of the list. One can make the cur(head) node next_ prt to look at the previous elements(*The first node has been turned around.*)
```c++
Node* reverse(Node* head){
    Node* cur = head;
    Node* prev = nullptr;
    Node* nxt; .//not initialized to anything 

    while(cur != nullptr){
        nxt = cur -> next_;
        cur -> next_ = prev;

        prev = cur;
        cur = nxt;
    }
    return prev;
}
```
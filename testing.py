class Node:
    def __init__(self, value, next_node=None):
        self.value = value
        self.next = next_node

def printFun(head):
    ptr = head
    while ptr:
        print(ptr.value)
        ptr = ptr.next

def shuffle(head):
    ptr1 = head
    ptr2 = head.next
    listCounter = 1

    while ptr1.next is not None: 
        if listCounter % 2 == 1:
            temp = ptr1.value
            ptr1 = ptr2.value
            ptr2 = temp
        ptr1.next
        ptr2.next
        listCounter + 1

    printFun(head)
if __name__ == "__main__":
    head = Node('a', Node('b', Node('c', Node('d', Node('e', Node('f'))))))
    print("Original list:")
    printFun(head)
    shuffle(head)
    print("Shuffled list:")
    printFun(head)


#include <iostream>
#include "array.cpp"
#include "singleLinkedList.cpp"
#include "doublyLinkedList.cpp"
using namespace std;

int main() {
     doublyLinkedList myList;

    // insert elements at different positions
    myList.insertAtHead(5);
    myList.insertAtHead(10);
    myList.insertAtTail(15);
    myList.insertAfter(myList.first->next, 25);
    myList.insertAt(20, 2);

    // print the list using forward traversal
    cout << "Forward traversal: ";
    myList.forwardTraversal(); // should print 10 5 20 25 15

    // remove elements from the list
    myList.removeAtHead();
    cout << "Forward traversal: ";
    myList.forwardTraversal();
    myList.removeAtTail();
    myList.forwardTraversal();
    myList.removeAt(1);
    myList.forwardTraversal(); 

    // retrieve an element at a specific index
    cout << myList.retrieveAt(0) << endl;

    // replace an element at a specific index
    myList.replaceAt(69,1);
    myList.forwardTraversal(); 

    // check if an element exists at a specific index
    cout << myList.isItemAtEqual(69,5) << endl;   

    // reverse the list and print it using backward traversal
    myList.insertAtHead(85);
    myList.insertAtHead(85);
    cout << "Forward traversal: ";
    myList.forwardTraversal(); 
    myList.reverse();
    cout << "forward traversal for reversed list: ";
    myList.forwardTraversal(); 
    // clear the list
    myList.clear();
    cout << "Forward traversal: ";
    myList.forwardTraversal(); // should print nothing
    
    return 0;
}

//   singleLinkedList list;
    
    // // Insert elements at head
    // list.insertAtHead(1);
    // list.insertAtHead(2);
    // list.insertAtHead(3);
    // list.print(); // Output: 3 2 1
    
    // // Insert element at tail
    // list.insertAtTail(4);
    // list.print(); // Output: 3 2 1 4
    
    // // Insert element at index
    // list.insertAt(5, 2);
    // list.print(); // Output: 3 2 5 1 4
    
    // // Remove element at head
    // list.removeAtHead();
    // list.print(); // Output: 2 5 1 4
    
    // // Remove element at tail
    // list.removeAtTail();
    // list.print(); // Output: 2 5 1
    
    // // Remove element at index
    // list.removeAt(1);
    // list.print(); // Output: 2 1
    
    // // Retrieve element at index
    // std::cout << list.retrieveAt(1) << std::endl; // Output: 1
    
    // // Replace element at index
    // list.replaceAt(3, 0);
    // list.print(); // Output: 3 1
    
    // // Check if element exists in list
    // std::cout << list.isExist(3) << std::endl; // Output: 1
    
    // // Check if item at index is equal to value
    // std::cout << list.isItemAtEqual(1, 1) << std::endl; // Output: 1
    
    // // Swap two elements
    // // list.swap(0, 1);
    // // list.print(); // Output: 1 3
    
    // // Check if list is empty
    // std::cout << list.isEmpty() << std::endl; // Output: 0
    
    // // Get size of list
    // std::cout << list.linkedListSize() << std::endl; // Output: 2
    
    // // Clear list
    // list.clear();
    // list.print(); // Output:
    
    // return 0;

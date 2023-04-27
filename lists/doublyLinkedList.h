#include <iostream>
using namespace std;



class doublyLinkedList{
    
private:
struct node{
        int item;
        node *next;
        node *prev;
        };
    int count;

public:

    node *first;
    node *last;

    doublyLinkedList();

    void insertAtHead (int element) ;

    void insertAtTail (int element) ;

    void insertAt (int element, int index) ;

    void insertAfter (node* prev_node, int data) ;

    void removeAtHead () ;

    void removeAtTail () ;

    void removeAt (int index) ;

    int retrieveAt (int index);

    void replaceAt (int newElement, int index);

    bool isExist (int element) ;

    bool isItemAtEqual (int element, int index) ;

    void swap (int firstItemIdx, int secondItemIdx) ; // swap two nodes without swapping data

    void reverse () ;  //reverse the data in the double linked list

    bool isEmpty ();

    int doubleLinkedListSize () ;

    void clear ();

    void forwardTraversal (); //Print from head to tail

    void backwardTraversal () ; //Print from tail to head
};
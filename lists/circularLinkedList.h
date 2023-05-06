#include <iostream>

using namespace std;

template <typename elementType >
class CircularLinkedList{
private:
    struct Node{
        elementType item;
        Node* next;
    };
    Node* first;
    Node* last;
    int length;
public:
    CircularLinkedList();
    void insertAtHead (elementType element);

    void insertAtTail (elementType element);

    void insertAt (elementType element, int index);

    void removeAtHead ();

    void removeAtTail ();

    void removeAt (int index);

    elementType retrieveAt (int index);

    void replaceAt (elementType newElement, int index);

    bool isExist (elementType element);

    bool isItemAtEqual (elementType element, int index);

//    void swap (int firstItemIdx, int secondItemIdx){}

    bool isEmpty ();

    int CircularlinkedListSize ();

    void clear ();

    void print ();
};


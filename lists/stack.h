#include <iostream>
using namespace std;

template <typename elementType >
class stack{
private:
    struct node{
        elementType item;
        node* next;
    };
    int size;
    node *topPtr;

public:
    stack(); // public constructor

    // public methods
    void push (elementType element);
    elementType pop () ;
    elementType top ();
    bool isEmpty () ;
    int stackSize () ;
    void clear ();
    void print () ;
};

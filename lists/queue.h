#include <iostream>
using namespace std;

template <typename elementType >
class queue{
private:
    struct node{
        elementType item;
        node* next;
    };
    int size;
    node *firstPtr;
    node *lastPtr;

    public:
    queue();
   
    bool isEmpty();

    int queueSize();

    void clear();

    void enqueue(elementType element);

    elementType dequeue();

    elementType first();

    void print();
};


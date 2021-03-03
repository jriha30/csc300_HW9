#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;

    public:
        LinkedList();
        void display();
        int getCount();
        void addEnd(int value);
        int removeEnd();
        void addFront(int value);
        int removeFront();
        void addAtIndex(int value, int index);
        int removeAtIndex(int index);
};
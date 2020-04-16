#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "Node.h"
#include "Node.cpp"


class Queue{
    protected:
        Node *first;
        Node *last;
    public:
        Queue();
        void enqueue(int date);
        int dequeue();
        void clear();
        void peek();    
        bool isEmpty();
        void toString();
};

#endif
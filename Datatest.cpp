#include "Queue.h"
#include "Queue.cpp"

int main(){
    Queue queue;
    queue.enqueue(2);
    queue.enqueue(15);
    queue.enqueue(6);
    queue.enqueue(18);
    queue.enqueue(4);
    queue.enqueue(3);
    queue.enqueue(1);
    queue.peek();
    queue.dequeue();
    std::cout<<"\n"<<queue.isEmpty();
    queue.toString();
    return 0;
}
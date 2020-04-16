#include <iostream>
#include "Queue.h"

Queue :: Queue(){
    first = NULL;
    last = NULL;
}
void Queue :: enqueue(int date){
    Node *node = new Node();
	node->setLoad(date);
	node->setNext(NULL);
	if(first==NULL){
		first = node;
		last = node;	      
	}else{
		last->setNext(node);
		last = node;
	}
}

int Queue :: dequeue(){
    if(isEmpty()){
		return -1;
	}else{
		Node *temp = first;
		int ourValue = first->getLoad();
		first = first->getNext();
		free(temp);
		return ourValue;
	}
}

void Queue :: clear(){
do{
    dequeue();
}while(first!=NULL);
}

void Queue :: peek(){
    if(isEmpty())
        std::cout<<"It's empty";
    else
        std::cout<<last->getLoad();
}

bool Queue :: isEmpty(){
    return (first==NULL) ? true : false;
}

void Queue :: toString(){
	std:: cout<<"[";
		Node *temp = first;
		while(temp!=NULL){
			if(temp->getNext()==NULL){
				std::cout<<temp->getLoad();
			}else{
				std::cout<<temp->getLoad();
				std::cout<<",";
			}
			temp = temp->getNext();
		}
	std::cout<<"]";
}



//Aaron Nicanor
#ifndef PQUEUE_H_
#define PQUEUE_H_

#include<iostream>
#include"cust.h"

using namespace std;

class Pqueue{

	public:
    	Pqueue();
    	~Pqueue();
    	bool dequeue(int &);
    	Cust *dequeue();
    	void enqueue(Cust *, int);
      int first_priority();
    	int length();
    	bool empty();
    	void print();

	private:
      //Node class
    	class Node{
      
        	public:
            	Node(Cust *cust,Node *next,int priority)
            	{pqueue_cust = cust; pqueue_next = next; pqueue_priority = priority;}
            	Cust *pqueue_cust;
            	Node *pqueue_next;
            	int pqueue_priority;
    	};
    	Node *pqueue_head = NULL;
};

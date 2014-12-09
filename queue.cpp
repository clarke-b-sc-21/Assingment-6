#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Queue.H"

/*
Author: Logan Clarke
Memory: Assignment # 6
Purpose: The purpose of this program is to implement a list class
using a queue.The list will contain 4 virtual funtions that must be 
implemented,these include store() to store an element, retrieve() to
retrieve a value from the list, empty() to tell us if a list is empty 
and full() to determine if the list is full.
*/


using namespace std;

/*initializes the queue*/
 void Init(QUEUE &myQueue, int MaxElem){
        myQueue = new HNODE;
	myQueue->MaxNum = MaxElem;
	myQueue->queue = 0;
	myQueue->numElem = 0;

 }

 /* push() to store an element  */
 void Push(QUEUE myQueue, int value){


	QPTR p = new QNODE;
	p->num = value;
	p->next = myQueue->queue;
	myQueue->queue = p;
	myQueue->numElem++;
   

 }

  
/*  pop() to retrieve a value from the list */
 int Pop(QUEUE myQueue){

        int x = myQueue->headNode->num;
	QPTR p = myQueue->queue;
	myQueue->queue = p->next;
	delete p;
	myQueue->numElem--;
	return x;
 }


/* isempty() to tell us if a list is empty */
 bool IsEmpty(QUEUE myQueue){
if(myQueue->numElem==0)return true;
 else return false;

 }


/* isfull() to determine if the list is full  */
 bool IsFull(QUEUE myQueue){
if (myQueue->numElem == myQueue->MaxNum) return true;
 else return false;

 }


/*dumps the queue*/
 bool Empty ( QUEUE myQueue){
while (IsEmpty(myQueue)!=true) Pop(myQueue);
	return true;

 }
 












































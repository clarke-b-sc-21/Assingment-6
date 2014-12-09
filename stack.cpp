#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

#include "Stack.H"


/*
Author: Logan Clarke
Memory: Assignment # 6
Purpose: The purpose of this program is to implement a list class
using a stack.The list will contain 4 virtual funtions that must be 
implemented,these include store() to store an element, retrieve() to
retrieve a value from the list, empty() to tell us if a list is empty 
and full() to determine if the list is full.
*/


using namespace std;

/*initializes the stack*/
 void Init(STACK &myStack, int MaxElem){
  
	myStack = new HNODE;
	myStack->MaxNum = MaxElem;
	myStack->stack = 0;
	myStack->numElem = 0;
    }




 /* push() to store an element  */
 void Push(STACK myStack, int value){


	SPTR p = new SNODE;
	p->num = value;
	p->next = myStack->stack;
	myStack->stack = p;
	myStack->numElem++;
   
 }





/* pop() to retrieve a value from the list */
 int Pop(STACK myStack){ 

   

 	int x = myStack->stack->num;
	SPTR p = myStack->stack;
	myStack->stack = p->next;
	delete p;
	myStack->numElem--;
	return x;
   
 }



/* isempty() to tell us if a list is empty */
 bool IsEmpty(STACK myStack){
 if(myStack->numElem==0)return true;
 else return false;
 }



/* isfull() to determine if the list is full  */
 bool IsFull(STACK myStack){
 if (myStack->numElem == myStack->MaxNum) return true;
 else return false;
 }



/*dumps the stack*/
 bool Empty ( STACK myStack){
 while (IsEmpty(myStack)!=true) Pop(myStack);
	return true;
 }





































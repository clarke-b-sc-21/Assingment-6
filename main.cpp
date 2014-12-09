#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include "List.H"
//#include "Stack.H"
#include "Queue.H"

using namespace std;


int main (void) {

int x;
	QUEUE s;
	Init(s,5);
	for (int i =0; i < 7; i++) {
		cout <<  "pushing elem # " << i << ":";
		cin >> x;
		if (!IsFull(s)) Push(s,x);
		   else cout << "Queue is Full\n ";
	}
	for (int i =0; i < 7;  i++) {
		if (!IsEmpty(s)) cout << Pop(s);
		   else cout << " Queue is empty\n ";
	}

}

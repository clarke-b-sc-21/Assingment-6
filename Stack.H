#define STACK_H

 struct headNode {
	int numElem;
	int MaxNum;
	struct node *stack;

 };

 struct node{

	int num;
	struct node *next;
 };

typedef struct node SNODE;
typedef SNODE *SPTR;
typedef struct headNode HNODE;
typedef HNODE *STACK;

void Push(STACK myStack, int value);
int Pop(STACK myStack);
bool IsEmpty(STACK myStack);
bool IsFull(STACK myStack);
bool Empty ( STACK myStack);
void Init(STACK &myStack, int MaxElem);




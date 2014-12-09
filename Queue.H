#define QUEUE_H

struct headNode {
     int numElem;
     int MaxNum;
     headnode *queue;

 };

  struct node {
     int num;
     struct node  *next;
 };

typedef struct node QNODE;
typedef  QNODE *QPTR;
typedef  struct headNode  HNODE;
typedef  HNODE *QUEUE;

void Push(QUEUE myQueue, int value);
int Pop(QUEUE myQueue);
bool IsEmpty(QUEUE myQueue);
bool IsFull(QUEUE myQueue);
bool Empty ( QUEUE myQueue);
void Init(QUEUE &myQueue, int MaxElem);



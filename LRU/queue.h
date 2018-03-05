typedef struct _Node {
    void *ptr;
    struct _Node * next;
}Node;


typedef struct _Queue {
    int size;
    Node * head; 
    Node * tail;
}Queue; 

Node * newNode(void *ptr);
void append(Queue * q, void *ptr);
void * pop(Queue * q);

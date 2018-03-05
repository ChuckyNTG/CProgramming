#include <stdlib.h>
#include "queue.h"

Node * newNode(void *ptr)
{
    Node * new_node = malloc(sizeof(Node));
    new_node->ptr = ptr;
    new_node->next = NULL;
}

void append(Queue * q, void *ptr)
{
    Node * new_node = newNode(ptr);
    if (q->head == NULL) 
    {
        q->head = new_node;
        q->tail = new_node;
    }
    else
    {
        q->tail->next =new_node;
        q->tail = new_node;
    }
}

void * pop(Queue * q)
{
    Node *old_node = q->head;
    q->head = q->head->next;
    void *ptr = old_node->ptr;
    free(old_node);
    return old_node;
}


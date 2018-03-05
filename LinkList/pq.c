#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
    int val;
    int priority;
    struct LinkedList *next;
} Node;

Node* newNode(int val,int p)
{
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->val = val;
    newNode->priority = p;
    newNode->next = NULL;
    return newNode;
}

void push(int val, int p, Node* list)
{
    Node* new_node = newNode(val,p);
    if(new_node->priority>(list)->priority)
    {
        new_node->next = (list);
        (list) = new_node;
    }
    else
    {
        Node* curr= (list);
        while(curr->next != NULL && curr->next->priority<p)
        {
           curr = curr->next;
        }

        new_node->next = curr->next;
        curr->next = new_node;
    }
} 

int pop(Node** list)
{
    Node* old_node = (*list);
    int val = old_node->val;
    (*list) = (*list)->next; 
    free(old_node);
    return val;
}

int peek(Node** list)
{
   return (*list)->val;
}

int main(int argc, char *av[])
{
    Node* root = newNode(50,3);
    printf("&root:%p\n",&root);
    printf("root:%p\n",root);
    push(40,4,root);
    printf("&root:%p\n",&root);
    printf("root:%p\n",root);
    push(80,1,root);
    printf("&root:%p\n",&root);
    printf("root:%p\n",root);
    push(30,2,root);
    printf("&root:%p\n",&root);
    printf("root:%p\n",root);
    push(15,3,root);
    printf("&root:%p\n",&root);
    printf("root:%p\n",root);

    while(root != NULL)
        printf("Value: %d\n",pop(&root));
    return 0;
}

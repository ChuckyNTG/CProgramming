#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int val;
    struct node * next;
}Node;

Node * newNode(int val)
{
    Node * new_node = malloc(sizeof(Node)); 
    if(new_node != NULL)
    {
        new_node->val = val;
        new_node->next = NULL;
    } 
    return new_node;
}

void appendNode(Node ** root, int val)
{
    Node * new_node = newNode(val);
    if((*root) == NULL)
        (*root) = new_node; 
    else
    {
        Node * curr = (*root);
        while(curr != NULL)
            curr = curr->next;
        curr->next = new_node;
    }  
}

void deleteNode(Node **root, int val)
{
    Node * curr = (*root);
    if(curr->val == val)
        curr = curr->next
    while(curr->next->val != val)
        curr = curr->next;
    curr->next = curr->next->next; 
}

void print_node(Node ** root)
{
    Node * curr = (*root);
    while(curr != NULL)
        printf("Current:%p\tVal:%d\tNext:%p\n",curr,curr->val,curr->next);
}


int main(int argc, char *argv[])
{
    int val;
    Node * root = NULL;
    scanf("%d",&val);
    return 0;
}

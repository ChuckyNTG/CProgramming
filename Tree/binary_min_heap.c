#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *left_child;
    struct node *right_child;
} *head=NULL; 

void insert(int num)
{
    struct node *new = malloc(sizeof(struct node)); 
    new->val = num; 
    new->left_child = NULL;
    new->right_child = NULL;
    if (head == NULL)
    {
        head = new; 
    }
    else
    {
        struct node *s = head;
        while(s != NULL)
        {
            if(s->left_child != NULL) 
            {
                
            }
            else if(s->right_child == NULL)
            {
                s->right_child = new;
                break;
            }
            else
            {
                s = s->left_child; 
            }
        }
    }
}

int main(int argc, char *argv[])
{
    head = malloc(sizeof(struct node));
    head-> val = 0; 
    printf("Value is %d\n",head->val);
    return 0;
}

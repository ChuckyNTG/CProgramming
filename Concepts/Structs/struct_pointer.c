#include<stdio.h>
#include<stdlib.h>

struct Record {
    int name;
    int number;
    int code;
} *head;

int main(int argc, char *argv[])
{
    head = malloc(sizeof(struct Record));
    head->name = 10;
    head->number = 20;
    head->code = 30;
    printf("Pointer to Struct:%p\n",head);
    printf("Address of name:%p\n",&head->name);
    printf("Address of number:%p\n",&head->number);
    printf("Address of code:%p\n",&head->code);
    for(int i=0;i<sizeof(struct Record);i++)
        printf("Data in struct:%d\n",*((int *)head+i));
    return 0;
}

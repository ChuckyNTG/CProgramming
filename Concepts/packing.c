#include <stdio.h>

/*
    Stack using just bitwise operations. Can only do numbers in range 0-9. Other numbers done at user discretion.
*/

__uint32_t pop(__uint32_t stack,int * size)
{
    
    if(*size > 0)
    {
        __uint8_t num = stack & 0x0F;
        printf("Popped:%d\n",num);

        stack = stack>>4;
        (*size)--;
    }
    else
        printf("Empty is your stack young padiwan. Nothing removed.\n");

    return stack;
}

__uint32_t push(__uint32_t stack, __int8_t num, int * size)
{
    stack = stack << 4;
    stack |= num; 

    (*size)++;
    return stack;
}

void printStack(__uint32_t stack, int size)
{
    printf("Bottom:[");
    while(size)
    {
        printf("%d,",stack & 0xF); // print lower 4 bits of number
        stack = stack >> 4; //shift bits down to get next number
        size--;
    }
    printf("]:Top\n");
}    
     

int main(int argc, char *argv[])
{
    __uint32_t stack = 0;
    int size = 0;
    printf("Enter your number(0-9) to push. Enter -1 to pop.\n");
    
    while(1)
    {
        int num = 0;
        printf("%% ");
        scanf("%d",&num);
        if(num >= 0) //if number not negative 1
        {
            stack = push(stack,num,&size);
            printStack(stack,size);
        }
        else if(num == -1)
        {
            stack = pop(stack,&size);
            printStack(stack,size);
        }
        else
            printf("Invalid Input.\n");
    }

    return 0;
}

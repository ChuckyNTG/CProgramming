#include<stdio.h>
#include<stdlib.h>

int lookup[100];
void print_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("The %dth index is %d\n",i,arr[i]);
}

int fib(int n)
{
    if(lookup[n] == -1) // if not defined
    {
        if (n<=1)
            lookup[n] = n; //define it dammit!
        else
            lookup[n] = fib(n-1) + fib(n-2); // return the other fibonacci numbers to build a new one
    }

    return lookup[n];
}
int main(int argc, char *argv[])
{
    int i,index;
    scanf("%d",&i);
    for(index=0;index<41;index++)
        lookup[index] = -1;
    printf("The %dth Fibonacci number is %d\n",i,fib(i));
    print_array(lookup,i+1);
}

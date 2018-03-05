#include<stdio.h>
//Tests if stacks are avaliable to eachother


int main(int argc, char *argv[])
{
    int x[5];
    prog(x,sizeof(x)/sizeof(int));
    for(int i=0;i<sizeof(x)/sizeof(int);i++)
        printf("%d",x[i]);
    return 0;
}

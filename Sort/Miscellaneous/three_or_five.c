#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    for(int i = 1;i<=100;i++)
    {
        if(i % 3 == 0)
            printf("%s","Multiple of Three");
        else if(i % 5 == 0)
            printf("%s","Multiple of Five");
        else
            printf("%s","Neither a multiple of Three or Five");
    }
}

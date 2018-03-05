#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    for(int i=65;i<=90;i++)
        printf("%d\n",strcmp(argv[1],(char *)&i));
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i,j;
    scanf("%d",&i);
    char *arr[i];
    for(j=0;j<i;j++)
    {
        arr[j] = (char *)malloc(10240 * sizeof(char));
        scanf("%s",arr[j]);
    }

    for(j=0;j<i-1;j++)
    {
        if(atoi(arr[j])<atoi(arr[j+1]))
        {
            printf("%s less than %s\n",arr[j],arr[j+1]);
        }
        else
            printf("%s greater than %s\n",arr[j],arr[j+1]);
    }
    return 0;
}

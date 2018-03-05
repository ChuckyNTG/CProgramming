#include<stdio.h>
#include<stdlib.h>




int main(int argc, char *argv[])
{
    int size,j, *arr;
    scanf("%d",&size);    
    arr = malloc(size(int) * size);
    for(j=0;j<size,j++)
        scanf("%d",&arr[j]);

    radixsort(arr,size);
}


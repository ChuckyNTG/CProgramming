#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int *lis,*arr, size,index, i,j;
    scanf("%d",&size);
    arr = malloc(sizeof(int) * size);
    lis = malloc(sizeof(int) * size);

    for(index=0;index<size;index++) //initialize indices
        scanf("%d",&arr[index]);
    
    for(index=0;index<size;index++) //initialize indices
        lis[index] = 1;
    
    for(i=1;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[i] && lis[j] + 1> lis[i]) // check if a previous greatest subsequence is
                lis[i] = lis[j] + 1; //longest previous subsequences plus one
        }
    }

    int max = lis[0]; 
    for(index=1;index<size;index++)
    {
        if(max<lis[index])
            max = lis[index];
    }       

    printf("The maximum subsequence is %d\n",max);
}

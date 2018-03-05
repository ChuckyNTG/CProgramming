#include<stdio.h>

int prefix_query(int index, int *arr)
{
    int sum = 0;
    index++;
    while(index>0)
    {
        sum += arr[index];
        index = index - (index & -index);
    }
    return sum;
}

int prefix_range(int lo, int hi, int *arr)
{
    return prefix_query(hi,arr) - prefix_query(lo,arr);
}

int main(int argc, char *argv[])
{
    int i,j,child;
    scanf("%d",&i);
    int arr[i+1];
    for(j=1;j<i+1;j++)
       scanf("%d",&arr[j]); 

    for(j=1;j<i;j++)
    {
        child = j + (j & -j);
        if(child < i)
            arr[child] += arr[j];  
    }


    printf("%d ",prefix_query(6,arr));
}

#include<stdio.h>

void swap(int i, int j, int arr[])
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int lo, int hi, int arr[])
{
    int piv = arr[lo];
    int i=lo,j=hi;
    while(1)
    {
        while(arr[i] < piv)
            i++;
        while(arr[j] > piv)
            j--;
        if(i>=j)
            return j;
        else
            swap(i,j,arr);
    }
}

void sort(int lo, int hi, int arr[])
{
    if (lo<hi)
    {
        int p = partition(lo,hi,arr);
        sort(lo,p-1,arr);
        sort(p+1,hi,arr);
    }
}

int main(int argc, char *argv[])
{

    int size;
    //test
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size;i++)
         scanf("%d",&arr[i]); 
    sort(0,size-1,arr);
    for(int i = 0; i<size;i++)
         printf("%d",arr[i]); 


    return 0;
}

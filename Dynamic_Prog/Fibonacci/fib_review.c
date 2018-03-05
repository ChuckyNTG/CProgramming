#include<stdio.h>

int fib(int n, int arr[])
{
    if(arr[n] == -1)
    {
        if(n <= 1)
            arr[n] = n;
        else
            arr[n] = fib(n-1,arr) + fib(n-2,arr); 
    }
    return arr[n]; 
}

int main(int argc, char *argv[])
{
    int nums; 
    scanf("%d",&nums);

    int arr[nums];
    for(int i = 0;i<nums;i++)
        arr[i] = -1;
    fib(nums-1,arr);
    for(int i = 0;i<nums;i++)
        printf("%d",arr[i]);
    return 0;
}

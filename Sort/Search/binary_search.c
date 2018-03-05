#include<stdio.h>

int binary_search(int i, int j, int *arr,int val)
{
    int m = i + (j-i)/2;
    if(val == arr[m])
        return m; 
    else if(i<j)
    {
        if(val<arr[m])
            return binary_search(i,m,arr,val);
        else
            return binary_search(m+1,j,arr,val);
    }
    else
        return -1;
}
int main(int argc, char *argv[])
{
    int i,num_of_nums;
    scanf("%d",&num_of_nums);
    int nums[num_of_nums];
    for(i=0;i<num_of_nums;i++)
        scanf("%d",&nums[i]);

    printf("%d",binary_search(0,num_of_nums-1,nums,4));
}

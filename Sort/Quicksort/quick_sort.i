# 1 "quick_sort.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "quick_sort.c"

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

int sort(int lo, int hi, int arr[])
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

    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size;i++)
         scanf("%d",&arr[i]);
    sort(0,size-1,arr);
    for(int i = 0; i<size;i++)
         printf("%d",arr[i]);


    return 0;
}

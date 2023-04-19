#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int a[],int lb,int ub)
{
    int start = lb;
    int end = ub;
    int pivot = a[lb];

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&a[start],&a[end]);
        }

    }
    swap(&a[lb],&a[end]);
    return end;
}

void quick_sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
       int lock = partion(a,lb,ub);
       quick_sort(a,lb,lock-1);
       quick_sort(a,lock+1,ub);
    }
}


int main() {
     int n,i;
        printf("enter the size of the array: ");
        scanf("%d\n",&n);
        int  arr[n];
        printf("Enter the Values of array\n");
        for( i = 0; i<n;i++)
        {
            scanf("%d\n",&arr[i]);
        }
    quick_sort(arr, 0, n - 1);
    printf("Sorted array: \n");
    for(int k=0;k<n;k++)
    {
        printf("%d\n",arr[k]);
    }
    return 0;
}
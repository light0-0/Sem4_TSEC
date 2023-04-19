#include<stdio.h>

void merge(int a[],int lb,int mid,int ub)
{
    int i = lb;
    int j= mid+1;
    int k = lb;
    int b[50];

    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            k++;
            i++;
        }
    }
   for (k = lb; k <= ub; k++) {
        a[k] = b[k];
    }
}

void  merge_sort(int a[],int lb,int ub)
{
    if(lb < ub)
    {
        int mid = (lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}


int main(){
     int n,i;
        printf("enter the size of the array: ");
        scanf("%d\n",&n);
                printf("Enter the Values of array\n");
        int  a[n];
        for( i = 0; i<n;i++)
        {
            scanf("%d\n",&a[i]);
        }
    merge_sort(a,0,n-1);
    printf("Sorted array: ");
    for(int k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
return 0;
}
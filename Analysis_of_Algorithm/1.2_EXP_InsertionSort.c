#include<stdio.h>

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
       int temp = a[i];
       int  j=i-1;
       
       while(j>=0 && a[j]>temp)
       {
        a[j+1] = a[j];
        j--;
       }
       a[j+1] = temp;
    }
}
 int main(){
    int n,i;
    printf("enter the size of the array: ");
    scanf("%d\n",&n);
       int  a[n];
       for( i = 0; i<n;i++)
       {
        scanf("%d\n",&a[i]);
       }
    insertion_sort(a,n);
    printf("sorted array\n");
    for(int k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
 return 0;
}
#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minimum(int a[], int n)
{
    int temp;
   for(int i=0;i<n-1;i++)
   {
    int min = i;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            min = j;
        }
        if(min!=1)
        {
            swap(&a[i],&a[min]);
            // temp = a[i];
            // a[i] = a[min];
            // a[min] = temp;
        }
    }
   } 
}


int main(){

        int n,i;
        printf("enter the size of the array: ");
        scanf("%d\n",&n);
        int  a[n];
        print("Enter the values of array");
        for( i = 0; i<n;i++)
        {
            scanf("%d\n",&a[i]);
        }
    minimum(a,n);
    printf("sorted array\n");
    for(int k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }

return 0;
}
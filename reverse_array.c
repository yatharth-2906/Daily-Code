#include<stdio.h>

void reverse_array(int arr[], int x);

int main(void)
{

    int i,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the element %d of main array: ",i+1);
        scanf("%d", &a[i]);
    }
    reverse_array(a,n);
    for(i=0; i<n; i++)
    {
        printf("The element %d of reversed array is :%d\n",i+1,a[i]);
    }
}

void reverse_array(int arr[], int x)
{
    int i,c=x-1,b[x];
    for(i=0; i<x; i++)
    {
        b[c-i] = arr[i];
    }
    for(i=0; i<x; i++)
    {
        arr[i] = b[i];
    }
}

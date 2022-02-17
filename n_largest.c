#include<stdio.h>

int main(void)
{
    int l;
    printf("Enter the number of elements you want to enter in the array:");
    scanf("%d", &l);
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n<=l && n>0)
    {
    int arr[l],i,j;
    for(i=0; i<l; i++)
    {
        printf("Enter the %d element of the array: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    int a[l];
    a[0]=arr[0];
    for(i=1; i<l; i++)
    {
        if(a[i]==a[i-1])
            continue;
        else
            a[i]=arr[i];
    }
    printf("The %d largest element is: %d\n",n,a[l-n]);
    printf("The %d smallest element is: %d",n,a[n-1]);
    }
    else
        printf("Sorry the %d largest and smallest element can not be found.");
}

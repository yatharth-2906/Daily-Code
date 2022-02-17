#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d", &arr[i]);
    }
    int n_even=0, n_odd=0;
    int even[n], odd[n];
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even[n_even]=arr[i];
            n_even++;
        }
        else
        {
            odd[n_odd]=arr[i];
            n_odd++;
        }
    }
    printf("The array in the required form is: ");
    for(i=0; i<n; i++)
    {
        if(i<n_odd)
            arr[i]=odd[i];
        else
            arr[i]=even[i-n_odd];
        printf("%d ", arr[i]);
    }

}

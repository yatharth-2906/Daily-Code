#include<stdio.h>

int main(void)
{
    int l1;
    printf("Enter the size of the array: ");
    scanf("%d", &l1);
    int arr[l1];
    int i,j;
    for(i=0; i<l1; i++)
    {
        printf("Enter the value of %d element of the array: ",i+1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(i=0; i<l1; i++)
    {
        for(j=i+1; j<l1; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    int ue=0;
    int check=0;
    for(i=0; i<l1; i++)
    {
        check=0;
        for(j=i+1; j<l1; j++)
        {
            if(arr[i]==arr[j])
                check++;
        }
        if(check==0)
            ue++;
    }
    int l2=ue,p=0;
    int arr2[l2];
    for(i=0; i<l1; i++)
    {
        check=0;
        for(j=i+1; j<l1; j++)
        {
            if(arr[i]==arr[j])
                check++;
        }
        if(check==0)
            {
                arr2[p]=arr[i];
                p++;
            }
    }
    printf("The %d^th smallest element is: %d\n",k,arr2[k-1]);
    printf("The %d^th largest element is: %d",k,arr2[l2-k]);
}

#include<stdio.h>

int main(void)
{
    int arr[25];
    puts("Enter the elements of array:");
    for(int i=0; i<25; i++)
        scanf("%d", &arr[i]);
    int search;
    printf("Enter the element to be searched within the array: ");
    scanf("%d", &search);
    int count=0;
    for(int j=0; j<25; j++)
    {
        if(arr[j]==search)
            count++;
    }
    if(count==0)
        printf("The number %d is not present in the list.",search);
    else
        printf("%d is appeared in the list %d time.",search,count);
}

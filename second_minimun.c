#include<stdio.h>

void s_min(int a[]);

int main(void)
{
    int arr[8];
    for(int i=0; i<8; i++)
        scanf("%d", &arr[i]);
    s_min(arr);
}

void s_min(int a[])
{
    int i, min1=a[0],largest=a[0];
    for(i=0; i<8; i++)
    {
        if(a[i]<min1)
            min1=a[i];
        if(a[i]>largest)
            largest=a[i];
    }
    int min2=largest;
    for(i=0; i<8; i++)
    {
        if(a[i]<min2 && a[i]>min1)
            min2=a[i];
    }
    printf("%d", min2);
}

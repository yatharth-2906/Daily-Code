#include<stdio.h>
#include<math.h>

int main(void)
{
    int n;
    printf("Enter a number to display it's binary equivalent: ");
    scanf("%d", &n);
    int i=0,l=0,c=1;
    while(c<=n)
    {
        l++;
        i++;
        c = (int)pow(2,i);
    }
    int arr[++l];
    for(i=0; i<l; i++)
        arr[i]=0;
    int m=n,r;
    i=0;
    while(m!=0)
    {
        r = m%2;
        arr[l-1-i++]=r;
        m = m/2;
    }
    printf("The binary equivalent of the number %d is: ");
    for(i=0; i<l; i++)
        printf("%d",arr[i]);
}

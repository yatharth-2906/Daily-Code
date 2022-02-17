#include<stdio.h>

int main(void)
{
    int n, display, element_1=0, element_2=1;
    printf("Enter the value of number of terms to be printed of the fibonacci series: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            printf("%d \n",element_1);
        else if(i==2)
            printf("%d \n",element_2);
        else
        {
            display = element_1+element_2;
            printf("%d \n",display);
            element_1=element_2;
            element_2=display;
        }
    }
}

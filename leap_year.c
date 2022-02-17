#include<stdio.h>

int main(void)
{
    int year;
    printf("Enter the year to cheak weather it is leap year or not: ");
    scanf("%d", &year);
    if(year%4==0)
        printf("The year %d is an leap year. \n",year);
    else
        printf("The year %d is not a leap year. \n",year);
}

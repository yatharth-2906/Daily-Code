#include<stdio.h>

typedef struct DATE
{
    int day;
    int month;
    int year;
} date;

void compare_dates(date a[], int n);

int main(void)
{
    date d[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter the day of date %d: ",i+1);
        scanf("%d", &d[i].day);
        printf("Enter the month of date %d: ",i+1);
        scanf("%d", &d[i].month);
        printf("Enter the day of date %d: ",i+1);
        scanf("%d", &d[i].year);
        printf("\n\n");
    }
    compare_dates(d,2);
}

void compare_dates(date a[], int n)
{
    int compare;
    if(a[0].year!=a[1].year)
    {
    if(a[0].year<a[1].year)
        compare=1;
    else
        compare=2;
    }
    else if(a[0].year==a[1].year)
    {
        if(a[0].month!=a[1].month)
        {
            if(a[0].month<a[1].month)
                compare=1;
            else
                compare=2;
        }
        else if(a[0].month==a[1].month)
        {
            if(a[0].day!=a[1].day)
            {
            if(a[0].day<a[1].day)
                compare=1;
            else
                compare=2;
            }
        else if(a[0].day==a[1].day)
            compare=3;
        }
    }
    if(compare==1)
        printf("Earlier Date: %d/%d/%d",a[0].day,a[0].month,a[0].year);
    else if(compare==2)
        printf("Earlier Date: %d/%d/%d",a[1].day,a[1].month,a[1].year);
    else if(compare==3)
        printf("Both dates are same.");
    }

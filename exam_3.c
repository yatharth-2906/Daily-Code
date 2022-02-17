#include<stdio.h>

int p();

int main(void)
{
    int n,max_marks; float marks;int sum=0;
    puts("Enter the number of subjects: ");
    scanf("%d", &n);
    puts("Enter the maximum marks of subjects: ");
    scanf("%d", &max_marks);
    for(int i=1; i<=n; i++)
    {
        printf("Enter the marks of subject %d :",i);
        scanf("%f", &marks);
        sum = sum +marks;
    }
    p(sum,n,max_marks);
}

int p(int a, int b, int c)
{
    float percentage, average;
    percentage = (a *100)/(b*c);
    average = a/b;
    printf("Percentage = %f and Average = %f",percentage,average);
}

#include<stdio.h>

int main(void)
{
int grade;
printf("Enter your grades: ");
scanf("%d", &grade);
if(grade>=60)
    printf("Passed.");
else
    printf("Failed.");

return 0;
}

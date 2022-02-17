#include<stdio.h>

int main(void)
{
    float marks1,marks2,marks3,percentage;
    printf("Enter the marks scored by the student in Mathematics: ");
    scanf("%f", &marks1);
    printf("Enter the marks scored by the student in Physics: ");
    scanf("%f", &marks2);
    printf("Enter the marks scored by the student in Computer Science: ");
    scanf("%f", &marks3);
    percentage = ((marks1+marks2+marks3)/300)*100;
    printf("The percentage of the student whose marks are entered above is: %f \n",percentage);
    if((percentage>=40) && marks1>=33 && marks2>=33 && marks3>=33)
        printf("Result: PASS \n");
    else
        printf("Result: FAIL \n");
}

#include<stdio.h>

float average(float a,float b,float c); //This function helps to find average of three numbers.

int main(void)
 {
     float a,b,c,avg;
     printf("Enter the value of first number: \n");
     scanf("%f", &a);
     printf("Enter the value of second number: \n");
     scanf("%f", &b);
     printf("Enter the value of third number: \n");
     scanf("%f", &c);
     avg = average(a,b,c);
     printf("AVERAGE: %f",avg);
 }

float average(float a,float b,float c)
 {
     return (a+b+c)/3;
 }

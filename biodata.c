#include<stdio.h>

int main(void)
{
    char name[1000],batch[1000],university[1000], enrol_number[1000];
    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("Enter your Enrollment Number: ");
    scanf("%s", &enrol_number);
    printf("Enter your Batch Code: ");
    scanf("%s", &batch);
    printf("Enter the name of your University: ");
    scanf("%s", &university);
    printf("Your Name: %s \n",name);
    printf("Your Enrollment Number: %s \n",enrol_number);
    printf("Your Batch Code: %s \n",batch);
    printf("Your University: %s",university);
}

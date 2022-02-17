#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[1000], s2[1000];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    printf("The concentrated string is %s",strcat(s1,s2));
}

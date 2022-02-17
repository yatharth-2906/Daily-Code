#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[1000], s2[1000];
    printf("Enter the first string: ");
    gets(s1);
    int i=0;
    strcpy(s2,s1);
    printf("The second string is: %s",s2);
}

#include<stdio.h>
#include<string.h>


int main(void)
{
    char s1[1000], s2[1000];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    int compariron_result = strcmp(s1,s2);
    printf("The result of the comparison between the strings (%s) and (%s) is: %d",s1,s2,compariron_result);
}

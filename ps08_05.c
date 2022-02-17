#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[10000];
    printf("Enter the source string: ");
    gets(s1);
    char s2[strlen(s1)];
    for(int i=0; i<strlen(s1); i++)
        s2[i] = s1[i];
    printf("The target string is: ");
    puts(s2);
}

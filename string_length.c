#include<stdio.h>

int main(void)
{
    char s[1000];
    printf("Enter a string to calculate it's length: ");
    gets(s);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    printf("The length of the string %s is %d",s,c);
}

#include<stdio.h>

int main(void)
{
    char s[10000];
    printf("Enter a string: ");
    gets(s);
    int i=0,c=0;
    while(s[i]!='\0')
    {
        c++;
        i++;
    }
    printf("The length of the string %s is %d",s,c);
}

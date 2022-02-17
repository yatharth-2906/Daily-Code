#include<stdio.h>

void encrypt(char str[]);

int main(void)
{
    char s[10000];
    printf("Enter the string: ");
    gets(s);
    encrypt(s);
}

void encrypt(char str[])
{
    int i=0,n;
    printf("The encrypted string Is:");
    while(str[i]!='\0')
    {
        n = (int)str[i];
        n++;
        str[i] = (char)n;
        i++;
    }
    puts(str);
}

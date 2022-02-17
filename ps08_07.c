#include<stdio.h>

void decrypt(char str[]);

int main(void)
{
    char s[10000];
    printf("Enter the string: ");
    gets(s);
    decrypt(s);
}

void decrypt(char str[])
{
    int i=0,n;
    printf("The Decrypted string is: ");
    while(str[i]!='\0')
    {
        n = (int)str[i];
        n--;
        str[i] = (char)n;
        i++;
    }
    puts(str);
}

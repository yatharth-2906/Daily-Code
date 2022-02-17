#include<stdio.h>

int character_count(char str[], char a);

int main(void)
{
    char s[10000], b;
    printf("Enter the string: ");
    gets(s);
    printf("Enter the character: ");
    scanf("%c", &b);
    int frequency = character_count(s,b);
    printf("The frequency of the character %c in the string %s is %d",b,s,frequency);
}

int character_count(char str[], char a)
{
    int i=0, c=0;
    char A;
    c=(int)a;
    if(c>=65 && c<=90)
    {
        c = c+32;
        A = (char)c;
    }
    else if(c>=97 && c<=122)
    {
        c = c-32;
        A = (char)c;
    }
    c=0;
    while(str[i]!='\0')
    {
        if(a==str[i] || A==str[i])
            c++;
        i++;
    }

    return c;
}

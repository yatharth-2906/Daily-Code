#include<stdio.h>

int character_presence_check_in_string(char str[], char a);

int main(void)
{
    char s[10000],b;
    printf("Enter the string: ");
    gets(s);
    printf("Enter the character: ");
    scanf("%c", &b);
    int result = character_presence_check_in_string(s,b);
    if(result>0)
        printf("The character %c is present in the string %s",b,s);
    else
        printf("The character %c is not present in the string %s",b,s);
}

int character_presence_check_in_string(char str[], char a)
{
    int i=0,c=0;
    char A;
    c=(int)a;
    if(a>=65 && a<=90)
    {
        c = c+32;
        A = (char)c;
    }
    else if(a>=90 && a<=122)
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

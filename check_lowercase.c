#include<stdio.h>

int main(void)
{
    char a;
    printf("Enter a character to check for lowercase: ");
    scanf("%c", &a);
    if((a>=97) && (a<=122)) // ASCII Code for lowercase characters(a to z) is from 97 to 122.
        printf("%c is lowercase.",a);
    else
        printf("%c is not lowercase.",a);
}

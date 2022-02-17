#include<stdio.h>

int main(void)
{
    char s[10];
    printf("Enter your string: ");
    for(int i=0; i<10; i++)
        scanf("%c", &s[i]);
    puts(s);
}

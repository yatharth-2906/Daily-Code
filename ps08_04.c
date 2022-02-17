#include<stdio.h>

void slice(char str[], int a, int b);

int main(void)
{
    char s[10000];
    printf("Enter the string : ");
    gets(s);
    int m,n;
    printf("Enter the starting point of slice : ");
    scanf("%d", &m);
    printf("Enter the ending point of slice : ");
    scanf("%d", &n);
    slice(s,m,n);
}

void slice(char str[], int a, int b)
{
    for(int i=a-1; i<b; i++)
        printf("%c",str[i]);
}

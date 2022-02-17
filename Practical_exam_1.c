#include<stdio.h>
#include<string.h>

void combine_string(char p[], int a, char q[], int b);

int main(void)
{
    char str1[100], str2[100];
    printf("Enter the 1st string: ");
    gets(str1);
    printf("Enter the 2nd string: ");
    gets(str2);
    int l1=strlen(str1), l2=strlen(str2);
    combine_string(&str1[0],l1,&str2[0],l2);
    printf("\n\nThe combined string is: ");
    puts(str1);
}

void combine_string(char p[], int a, char q[], int b)
{
    char r[100], position=0;
    for(int i=0; p[i]!='\0'; i++)
    {
        r[position++] = p[i];
    }
    for(int i=0; q[i]!='\0'; i++)
    {
        r[position++] = q[i];
    }
    for(int i=a+b; i<100; i++)
        r[i]='\0';
    strcpy(p,r);
}

#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[1000], s2[100];
    printf("Enter the source String: ");
    gets(s1);
    printf("Enter the word to be checked in the source string: ");
    gets(s2);
    int i,j,k,c=0;
    for(i=0; i<strlen(s1); i++)
    {
        k=0;
        for(j=i; s2[k]!='\0'; j++)
        {
            if(s1[j]!=s2[k])
                break;
            k++;
        }
        if(k==strlen(s2))
        {
            c++;
            break;
        }
    }
    if(c==1)
        printf("%s is present in %s.",s2,s1);
    else
        printf("%s is not present in %s.",s2,s1);
}

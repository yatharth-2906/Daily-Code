#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    char *s[6] = { "We will teach you how to... ", "Move a mountain ", "Level a building ", "Erase the past ", "Make a million ", "...all through C! "};
    int n,c1=0,c2=0;
    char r[100];
    for(int a=0; a<100; a++)
        r[a]='\0';
    for(int i=0; i<6; i++)
    {
        n=0;
        char test[1000];
        strcpy(test,s[i]);
        for(int j=0; j<strlen(test); j++)
        {
            if(test[j]==' ')
                n++;
        }
        n++;
        char *sample[10],w[100];
        for(int k=0; k<strlen(test); k++)
        {
            if(test[k]!=' ')
            {
                w[c2]=test[k];
                c2++;
            }
            else
            {
                strcpy(sample[c1],w);
                c1++;
                strcpy(w,r);
                c2=0;
            }
        }
        for(int l=0; l<n; l++)
        {
            if(strcmp(sample[l],s1)==0)
                printf("%s",s2);
            else
                printf("%s",sample[l]);
        }
    }
}

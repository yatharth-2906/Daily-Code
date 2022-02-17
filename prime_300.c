#include<stdio.h>

int main()
{
    int check,c=0;
    for(int i=1; i<=300; i++)
    {
        for(int j=1; j<=i; j++)
        {
        if(i==1)
            c=0;
        else
        {
            if(i%j==0)
            c++;
        }
        }
    if(c==2)
        printf("%d\n",i);
    c=0;
    }

    return 0;
}

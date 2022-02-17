#include<stdio.h>

int main(void)
{
    int a[3],b[3],c[3];
    for(int i=0; i<3; i++)
    scanf("%d", &a[i]);
    for(int i=0; i<3; i++)
    scanf("%d", &b[i]);
    for(int i=0; i<3; i++)
    scanf("%d", &c[i]);
    if((a[0]>=1 && a[0]<=70) && (a[1]>=1 && a[1]<=70) && (a[2]>=1 && a[2]<=70) && (c[0]>=1 && c[0]<=70) && (c[1]>=1 && c[1]<=70) && (c[2]>=1 && c[2]<=70) && (b[0]>=1 && b[0]<=70) && (b[1]>=1 && b[1]<=70) && (b[2]>=1 && b[2]<=70))
    {
        int p1=a[0]+a[1]+a[2];
        int p2=b[0]+b[1]+b[2];
        int p3=c[0]+c[1]+c[2];
        if(p1<p2 && p1<p3)
        {
            for(int i=0; i<3; i++)
                printf("%d ",a[i]);
            printf("\n");
            if(p2<p3)
            {
                for(int i=0; i<3; i++)
                printf("%d ",b[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",c[i]);
            }
            else
            {
                for(int i=0; i<3; i++)
                printf("%d ",c[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",b[i]);
            }

        }
        else if(p2<p1 && p2<p3)
        {
            for(int i=0; i<3; i++)
                printf("%d ",b[i]);
            printf("\n");
            if(p1<p3)
            {
                for(int i=0; i<3; i++)
                printf("%d ",a[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",c[i]);
            }
            else
            {
                for(int i=0; i<3; i++)
                printf("%d ",c[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",a[i]);
            }
        }
        else if(p3<p1 && p2>p3)
        {
            for(int i=0; i<3; i++)
                printf("%d ",c[i]);
            printf("\n");
            if(p1<p2)
            {
                for(int i=0; i<3; i++)
                printf("%d ",a[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",b[i]);
            }
            else
            {
                for(int i=0; i<3; i++)
                printf("%d ",b[i]);
                printf("\n");
                for(int i=0; i<3; i++)
                printf("%d ",a[i]);
            }
        }
    }
    else
        printf("Outside the range");
}

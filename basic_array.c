#include<stdio.h>

int main(void)
{
    int l,b,h;
    printf("Enter the length of array: ");
    scanf("%d", &l);
    printf("Enter the width of array: ");
    scanf("%d", &b);
    printf("Enter the depth of array: ");
    scanf("%d", &h);
    int *p,a[l][b][h],i,j,k,c=1;
    for(i=0; i<l; i++)
    {
        for(j=0; j<b; j++)
        {
            for(k=0; k<h; k++)
            {
                if(c>l*b*h)
                    break;
                printf("Enter the element %d of array: ",c);
                scanf("%d", &a[i][j][k]);
                p = &a[i][j][k];
                printf("The address of element %d of array is: %u\n",c,p);
                c++;
            }
        }
    }
}

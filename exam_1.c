#include<stdio.h>
#include<math.h>

int main(void)
{

    int binary;
    printf("The Binary Number is ");
    scanf("%d", &binary);
    int rem,i=0;
    float decimal=0,revd;
    while(binary >0)
    {
        rem = binary %10;
        revd = revd + (rem *pow(2,i));
        binary = binary/10;
        i++;
    }
    rem =0;
    int m = revd;
    while(m>0)
    {
        rem = m%10;
        decimal = decimal*10 +rem;
        m = m/10;
    }
    printf("The reverse number in decimal is %.0f",decimal);
}

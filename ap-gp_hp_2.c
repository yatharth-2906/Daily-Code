#include<stdio.h>
#include<math.h>
int main (void)
{
    float a,b,ap,gp,hp;
    printf("Enter The Value Of First Number: ");
    scanf("%f", &a);
    printf("Enter The Value Of Second Number: ");
    scanf("%f", &b);
    ap = (a+b)/2;
    gp = pow((a*b),0.5);
    hp = (gp*gp)/ap;
    printf("The Value Of Arithmetic Mean of Numbers Mentioned above is: %f \n", ap);
    printf("The Value Of Geometric Mean of Numbers Mentioned above is: %f \n", gp);
    printf("The Value Of Harmonic Mean of Numbers Mentioned above is: %f \n", hp);
}

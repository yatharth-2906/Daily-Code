#include<stdio.h>
#include<math.h>
int main(void)
{
    float am,gm,hm,a,b;
    printf("Enter the value of arithmetic mean: ");
    scanf("%f", &am);
    printf("Enter the value of geometric mean: ");
    scanf("%f", &gm);
    a = am + pow(((am*am)-(gm*gm)),0.5);
    b = am - pow(((am*am)-(gm*gm)),0.5);
    hm = pow(gm,2)/am;
    printf("The numbers whose Arithmetic Mean is entered are: \n");
    printf("First Number: %f \n",a);
    printf("Second Number: %f \n",b);
    printf("The Harmonic Mean of numbers mentioned above is: %f \n",hm);
}

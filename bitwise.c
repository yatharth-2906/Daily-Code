#include<stdio.h>

int main(void)
{
    int a,b;
    printf("Enter two numbers to perform bitwise operations: \n");
    scanf("%d %d", &a, &b);
    printf("%d AND %d = %d \n",a,b,a&b);
    printf("%d OR %d = %d \n",a,b,a|b);
    printf("%d XOR %d = %d \n",a,b,a^b);
    printf("2's Compliment of 12 = %d \n",~12);
    printf("Left shift %d by 2 bits = %d \n",a,a<<2);
    printf("Right shift %d by 2 bits = %d \n",b,b>>2);
}

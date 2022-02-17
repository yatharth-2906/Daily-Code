#include<stdio.h>

int main(void)
{
    int i=5;
    printf("The address of i is %p \n",&i);
    printf("The value of i is %d",*(&i));
}

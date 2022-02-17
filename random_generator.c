#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int random;
    srand(time(0));
    random = rand();
    printf("The random number generated is: %d",random);
}

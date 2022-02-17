#include<stdio.h>

int main(void)
{
    printf("The value of 3.0/8-2 is: %d \n",3.0/8-2);
    printf("The value of 3.0/8-2 is: %f \n",3.0/8-2);
    /* If data type of 3.0/8-2 is asked then write DOUBLE as GCC considers decimal numbers as double data type.
    If options are given between int and float then choose float. Precision of double is more than float.*/
    int x=2,y=3,z=3,k=1;
    printf("The value of 3*x/y-z+k is: %d \n",(3*x/y-z+k +45));
    printf("The value of 3*x/y-z+k is: %f \n",(3*x/y-z+k +45));
}

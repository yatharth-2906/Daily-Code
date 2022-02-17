#include<stdio.h>
float force(float mass);

int main(void)
{
    float mass, value_force;
    printf("Enter the mass of Body in kilogram to find the force between the Body and Earth: \n");
    scanf("%f", &mass);
    value_force = force(mass);
    printf("The Force between the Body and Earth in Newton is: %.2f",value_force); //The .2 ensures that only 2 decimal values after point are printed.
}

float force(float mass)
{
    return mass*9.81;
}

#include<stdio.h>
float Cel_to_Far(float celcius);
float Far_to_Cel(float celcius);

int main(void)
{
    int choice;  float input_temperature, converted_temperature;
    printf("To convert Temperature from Celcius to Fraenheight enter 1. \n");
    printf("To convert Temperature from Farenheight to Celcius enter 2. \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter the Temperature in Celcius to Convert it in Farenheight: \n");
        scanf("%f", &input_temperature);
        converted_temperature = Cel_to_Far(input_temperature);
        printf("The Temperature in Farenheight is: %f",converted_temperature);
    }
    else if(choice==2)
    {
        printf("Enter the Temperature in Farenheight to Convert it in Celcius: \n");
        scanf("%f", &input_temperature);
        converted_temperature = Far_to_Cel(input_temperature);
        printf("The Temperature in Celcius is: %f",converted_temperature);
    }
    else
        printf("Invalid Choice.");
}

float Cel_to_Far(float celcius)
{
    float farenheight = ((9*celcius)/5) +32;
    return farenheight;
}

float Far_to_Cel(float farenheight)
{
    float celcius = ((farenheight-32)/9)*5;
    return celcius;
}

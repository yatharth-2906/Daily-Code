#include<stdio.h>

typedef struct complex
{
    float real;
    float imaginary;
} complex_number;

void display_numbers(complex_number a[], int b);

int main(void)
{
    int no;
    printf("Enter the number of complex numbers to deal with: ");
    scanf("%d", &no);
    complex_number n[no];
    for(int i=0; i<no; i++)
    {
        printf("Enter the real value of complex number %d: ",i+1);
        scanf("%f", &n[i].real);
        printf("Enter the imaginary value of complex number %d: ",i+1);
        scanf("%f", &n[i].imaginary);
    }
    display_numbers(&n[0], no);
}

void display_numbers(complex_number a[], int b)
{
    for(int i=0; i<b; i++)
    {
        printf("The complex number %d: %.2f+%.2fi\n",i+1,a[i].real,a[i].imaginary);
    }
}

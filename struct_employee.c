#include<stdio.h>

typedef struct employee
{
    char m[100];
    int code;
    float salary;
} emp;

int main(void)
{
    char company[100];
    printf("Enter the name of your company: ");
    gets(company);
    int n;
    printf("Enter the number of employee working in %s: ",company);
    scanf("%d", &n);
    emp e[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the name of employee %d: ",i+1);
        gets(e[i].m);
        printf("Enter the Code of employee %d: ", i+1);
        scanf("%d", &e[i].code);
        printf("Enter the Salary of employee %d in USD: ", i+1);
        scanf("%f", &e[i].salary);
        printf("\n\n");
    }
    emp *ptr = &e[0];
    for(int i=0; i<n; i++)
    {
        printf("Enter the name of employee %d: %s\n",i+1,ptr->m);
        printf("Enter the Code of employee %d: %d\n",i+1,ptr->code);
        printf("Enter the Salary of employee %d: %f\n",i+1,ptr->salary);
        ptr++;
    }
}

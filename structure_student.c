#include<stdio.h>

typedef struct student
{
     int rn;
     char nam[1000];
     char department[1000];
     char course[1000];
     int year;
} stud;

int details_display_year(stud d1, int ye);

int details_display_rn(stud d2, int ro);

int main(void)
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    stud data[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Roll Number of student %d: ", i+1);
        scanf("%d", &data[i].rn);
        printf("Enter the Name of student %d: ", i+1);
        gets(data[i].nam);
        printf("Enter the Department of student %d: ", i+1);
        gets(data[i].department);
        printf("Enter the Course of student %d: ", i+1);
        gets(data[i].course);
        printf("Enter the Year of student %d: ", i+1);
        scanf("%d", &data[i].year);
    }
    int confirm=0;
    int y;
    printf("Enter the Year of students whose information is to be displayed: ");
    scanf("%d", &y);
    printf("\n\n");
    for(int j=0; j<n; j++)
    {
        if(details_display_year(data[j],y)==1)
            confirm++;
    }
    if(confirm==0)
        printf("Sorry! No Details of student studying in the year %d is present in the data.",y);
    confirm=0;
    int ro;
    printf("Enter the Roll Number of student whose information is to be displayed: ");
    scanf("%d", &ro);
    printf("\n\n");
    for(int k=0; k<n; k++)
    {
        if(details_display_rn(data[k],ro)==1)
        confirm++;
    }
    if(confirm==0)
        printf("Sorry! No Details of student with Roll Number %d is present in the data.",ro);
}

int details_display_year(stud d1, int ye)
{
        if(d1.year==ye)
        {
            printf("The Roll Number of the student is: %d\n",d1.rn);
            printf("The Name of the student is: %s\n",d1.nam);
            printf("The Department of the student is: %s\n",d1.department);
            printf("The Course of the student is: %s\n",d1.course);
            printf("\n\n");
            return 1;
        }
        else
            return 0;
}

int details_display_rn(stud d2, int ro)
{
        if(d2.rn==ro)
        {
            printf("The Name of the student is: %s\n",d2.nam);
            printf("The Department of the student is: %s\n",d2.department);
            printf("The Course of the student is: %s\n",d2.course);
            printf("The Year of the student is: %d\n",d2.year);
            printf("\n\n");
            return 1;
        }
        else
            return 0;
}

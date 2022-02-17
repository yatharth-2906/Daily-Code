#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int count_pos=0, count_neg=0, count_neut=0;
    for(int i=0; i<n; i++)
    {
        printf("Enter the %d element of array: ",i+1);
        scanf("%d", &arr[i]);
        if(arr[i]==0)
            count_neut++;
        else if(arr[i]>0)
            count_pos++;
        else if(arr[i]<0)
            count_neg++;
    }
    int pos_arr[count_pos], neg_arr[count_neg], neut_arr[count_neut];
    int pos1=0, pos2=0, pos3=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            neut_arr[pos3]=arr[i];
            pos3++;
        }
        else if(arr[i]>0)
        {
            pos_arr[pos1]=arr[i];
            pos1++;
        }
        else if(arr[i]<0)
        {
            neg_arr[pos2]=arr[i];
            pos2++;
        }
    }
    pos1=pos2=pos3=0;
    printf("The array in the required format is: ");
    for(int i=0; i<n; i++)
    {
        if(pos2<count_neg)
        {
            arr[i]=neg_arr[pos2];
            pos2++;
        }
        else if(pos3<count_neut)
        {
            arr[i]=neut_arr[pos3];
            pos3++;
        }
        else if(pos1<count_pos)
        {
            arr[i]=pos_arr[pos1];
            pos1++;
        }
        printf("%d", arr[i]);
        if(i!=n-1)
            printf(", ");
    }

}

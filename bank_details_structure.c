#include<stdio.h>

typedef struct bank_account_details
{
    int an;
    char name[1000];
    float balance;
} account;

int low_balance(account a);

float transaction(account b, int c);

int main(void)
{
    int n;
    printf("Enter the number of Bank Customers: ");
    scanf("%d", &n);
    account data[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Name of the customer %d: ",i+1);
        gets(data[i].name);
        printf("Enter the Account Number of the customer %d: ",i+1);
        scanf("%d", &data[i].an);
        printf("Enter the Account Balance of the customer %d: ",i+1);
        scanf("%f", &data[i].balance);
    }
    printf("Displaying the details of Bank Account whose balance is below Rs 100: \n\n");
    int count=0;
    for(int j=0; j<n; j++)
    {
        if(low_balance(data[j])==1)
            count++;
    }
    if(count==0)
        printf("Sorry! No details of account have been found in the data whose balance is below Rs 100.\n");
    int target;
    printf("Enter the Account Number in which the transaction is needed to be carried out:");
    scanf("%d", &target);
    for(int k=0; k<n; k++)
    {
        float modify = transaction(data[k],target);
        float checking=0;
        if(modify!=checking)
         {
             data[k].balance = modify;
         }
    }
}

int low_balance(account a)
{
    float min = 100;
    if(a.balance<min)
    {
        printf("Account Holder's Name: %s",a.name);
        printf("Account Number: %d",a.an);
        printf("\n\n");
        return 1;
    }
    else
        return 0;
}

float transaction(account b, int c)
{
    float min=100,new_balance;
    if(b.an==c)
    {
        int choice;
        printf("Enter 1 to deposit.\nEnter 0 for withdrawal.\nEnter your choice: ");
        scanf("%d", &choice);
        float m;
        if(choice==0)
        {
            printf("Enter the amount of withdrawal: ");
            scanf("%f", &m);
            if(b.balance-m>min)
            {
                new_balance = b.balance-m;
                printf("The Current balance of account after transaction is %f",new_balance);
                return new_balance;
            }
            else
            {
                printf("Sorry! transaction is not possible.\n");
                return 0;
            }
        }
        else if(choice==1)
        {
            printf("Enter the amount to deposit: ");
            scanf("%f", &m);
            if(b.balance+m>min)
            {
                new_balance = b.balance+m;
                printf("The Current balance of account after transaction is %f",new_balance);
                return new_balance;
            }
            else
            {
                printf("Sorry! transaction is not possible.\n");
                return 0;
            }
        }
    }
}

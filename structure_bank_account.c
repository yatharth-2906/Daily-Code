#include<stdio.h>

typedef struct bank{
    char NAME[100];
    char branch[100];
    int an;
    int ifsc;
    float balance;
} bank_account;

void display_balance(bank_account a[], int b, int c);

int main(void)
{
    char bank[100];
    printf("Enter the name of the bank: ");
    gets(bank);
    int n;
    printf("Enter the number of customers in %s Bank: ",bank);
    scanf("%d", &n);
    bank_account b[n];
    for(int i=0; i<n; i++)
    {
        printf("\n\nEnter the details of customer %d: ",i+1);
        printf("\nEnter the name of Account Holder: ");
        gets(b[i].NAME);
        printf("Enter the Branch Details of Account: ");
        gets(b[i].branch);
        printf("Enter the Bank Account Number: ");
        scanf("%d", &b[i].an);
        printf("Enter the IFSC Code: ");
        scanf("%d", &b[i].ifsc);
        printf("Enter the Account Balance: ");
        scanf("%f", &b[i].balance);
    }
    int search;
    printf("\n\nEnter the bank account number whose balance is to be displayed: ");
    scanf("%d", &search);
    display_balance(&b[0],n,search);
}

void display_balance(bank_account a[], int b, int c)
{
    int FLAG=0;
    for(int i=0; i<b; i++)
    {
        if(a[i].an==c)
        {
            printf("BALANCE: %f",a[i].balance);
            FLAG=1;
            break;
        }
    }
    if(FLAG!=1)
        printf("Sorry the account details are not present in data.");
}

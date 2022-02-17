#include<stdio.h>

int main()
{
    int stock,order;
    char credit;
    printf("'A' denotes that the credit of the customer if good.\n");
    printf("'B' denotes that the credit of the customer if bad.\n");
    printf("Enter the credit details of the user: ");
    scanf("%c", &credit);
    printf("Enter the stock of the company: ");
    scanf("%d", &stock);
    printf("Enter the order of the user: ");
    scanf("%d", &order);
    if(credit == 'A' || credit == 'a')
    {
        if(order<=stock)
            printf("Your requirement of order %d will be supplied.",order);
        else if(order >stock)
            printf("Your requirement of %d is out of stock.\nHowever %d will be fulfilled and the remaining %d will be fulfilled later.",order,stock, order-stock);
    }
    else
        printf("Sorry! Your requirement can't be fulfilled as your credit score id bad.");

        return 0;
}

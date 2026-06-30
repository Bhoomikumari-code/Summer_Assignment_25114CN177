// This program create the ATM simulation
#include <stdio.h>

int main()
{
    int choice;
    int balance = 5000, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Balance = %d", balance);
    }
    else if (choice == 2)
    {
        printf("Enter deposit amount: ");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("New Balance = %d", balance);
    }
    else if (choice == 3)
    {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);
        if (amount <= balance)
        {
            balance = balance - amount;
            printf("New Balance = %d", balance);
        }
        else
        {
            printf("Insufficient Balance");
        }
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
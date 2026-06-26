#include <stdio.h>

int main()
{
    float balance, amount;
    int choice;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Deposit Successful.\n");
                printf("Updated Balance = %.2f\n", balance);
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful.\n");
                    printf("Remaining Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
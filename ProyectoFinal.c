#include <stdio.h>

float wire_transfer(float total)
{
    float transfer;
    int card_number[16];
    int op, i;

    printf("How much money would you like to transfer?\n");
    scanf("%f" ,&transfer);

    if(total>=transfer)
    {
        do
        {
            printf("Introduce the card number one digit at a time: \n");
            for (i = 0; i < 16; i++)
            {
                scanf("%d", &card_number[i]);
            }

            printf("The card number is: ");

            for (i = 0; i < 16; i++)
            {
                printf("%d ", card_number[i]);
            }

            printf("\n\nIs it correct?\n");
            printf("1. Yes.\n");
            printf("0. No.\n");
            scanf("%d" ,&op);

        }while (op==0);

        total-=transfer;

        printf("We have transferred $%2.2f dollars into the given card number': ", transfer);
        for (i = 0; i < 16; i++)
        {
            printf("%d ", card_number[i]);
        }
        printf("\nYour current balance is now $%2.2f dollars.\n", total);
        
    }
    else
    {
        printf("You do not have enough money.\n");
    }

    return total;
}
////////////////////////////////////////////////////
float deposit(float money)
{
    float deposited;
    
    printf("How much money would you like to deposit?\n\n");
    scanf("%f" ,&deposited);
	money+=deposited;
    printf("You have deposited $%2.2f dollars to your account.\n", deposited);
    printf("Your current balance is now $%2.2f dollars.\n\n", money);

    return money;
}
///////////////////////////////////////////////////
void balance(float money)
{
    printf("Your current balance is $%2.2f dollars.\n", money);
}
///////////////////////////////////////////////////
float withdraw(float money)
{
    float draw;

    printf("How much money would you like to withdraw?\n");
    scanf("%f", &draw);
    if(money>=draw)
    {
        money-=draw;
        printf("You have withdrawn $%2.2f dollars from your account.\n", draw);
        printf("Your current balance is now $%2.2f dollars.\n", money);
    }
    else
    {
        printf("You do not have enough money.\n");
    }
    return money;
}
///////////////////////////////////////////////////
int screen(void)
{
    int op;

    printf("1. Deposit.\n");
    printf("2. Check balance.\n");
    printf("3. Withdraw money.\n");
    printf("4. Transfer.\n");
    printf("5. Exit.\n\n");
    printf("Introduce your option:\n");
    scanf("%d" ,&op);

    return op;
}
//MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN
int main (void)
{
    float money=0;
    int op;

    printf("Hello, what would you like to do?\n\n");

    do
    {
        switch (screen())
        {
        case 1:
            money=deposit(money);
            break;
        case 2:
            balance(money);
            break;
        case 3:
            money=withdraw(money);
            break;
        case 4:
            money=wire_transfer(money);
            break;
        case 5:
            printf("Thank you!\n");
            return 0;
        default:
            printf("Invalid option.\n");
            break;
        }
        printf("Would you like to do something else?\n");
        printf("1 - Yes\n");
        printf("0 - No\n");
        scanf("%d" ,&op);
    } while (op==1);

    printf("Thank you!\n");
    return 0;
}

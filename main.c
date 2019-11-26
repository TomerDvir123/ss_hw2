#include "myBank.h"
#include <stdio.h>
char chcekLimit(int account,char ans)
{ 
    if(account>950 || account<901)
    {
        printf("Your number account is illegal! The number must be 901-950");
        ans='E';
        return ans;
    }
    return ans;
}

int main()
{
    char ans;
    int account;
    double inter;
    double funds;
    double money;
    int num = 0;
    do
    {
        printf("please enter ‫‪Transaction‬‬ ‫‪type‬‬ code \n 'O' for open account \n 'B' for balance inquiry ");
        printf("\n 'D' for deposit funds \n 'W' for cash withrawal \n 'C' for close account");
        printf("\n 'I' for add interest \n 'P' for balance inquiry \n 'E' for close all accounts\n");
        scanf(" %c", &ans);
        int count = 0;
        while(getchar() != '\n')
        {
            count++;
        }
        if(count>0)
        {
            ans = 'v';

        }
        switch (ans)
        {

        case 'O':
            printf("\nenter a deposit\n");
            scanf("%lf", &money);
            openAccount(money);

            break;

        case 'B':
            printf("Enter number of account:\n");
            scanf("%d", &account);
            ans=chcekLimit(account,ans);
            if (ans=='E')
            {
                break;
            }

            balanceInquiry(account);
            break;

        case 'D':
            printf("Enter number of account:\n");
            scanf("%d", &account);
             ans=chcekLimit(account,ans);
            if (ans=='E')
            {
                break;
            }
            printf("How much money do you want to diposit in account: \n");
            scanf("%lf", &money);
            deposit(account, money);
            break;

        case 'W':
            printf("Enter number of account:");
            scanf("%d", &account);
             ans=chcekLimit(account,ans);
            if (ans=='E')
            {
                break;
            }
            printf("How much money do you want to attract from account: \n");
            scanf("%lf", &money);
            withrawal(account, money);
            break;

        case 'C':
        printf("Enter number of account:");
            scanf("%d", &account);
             ans=chcekLimit(account,ans);
            if (ans=='E')
            {
                break;
            }
            closeAccount(account);
            break;

        case 'I':
         printf("Enter percent of interest:");
            scanf("%lf", &inter);
            interest(inter);
            break;

        case 'P':
            printAccount();
            break;

        case 'E':
            num = 1;
            closeAllAccont();
            break;

        default:
            break;
        }
    } while (num != 1);
}


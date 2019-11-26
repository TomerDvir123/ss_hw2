#include "myBank.h"
#include <stdio.h>

#define numcount 50
double arrcount[2][numcount];
int usedcount = 0;

int openAccount(double x)
{

    for (int i = 0; i < numcount; i++)
    {
        if (arrcount[0][i] == 0)
        {
            arrcount[0][i] = 1;
            arrcount[1][i] = x;
            printf("The balance inquiry in account %d is:%lf \n",i+901,arrcount[1][i]);
            break;
          
        }
        if (i+1 == 50)
        {
            printf("not enough space for anuther count. \n");
        }
    }
}

double balanceInquiry(int x)
{
    if (arrcount[0][x - 901] == 1)
    {
        printf("The balance inquiry in account %d is:%lf \n",x,arrcount[1][x-901]);
    }
    else
    {
        printf("Account number %d is closed. \n",x);
    }
}
double deposit(int x, double y)
{
    if (arrcount[0][x - 901] == 1)
    {
        arrcount[1][x - 901] = arrcount[1][x - 901] + y;
        printf("Your balanc in account %d is %lf \n",x,arrcount[1][x - 901]);
    }
    else
    {
        printf("Account number %d is closed. \n",x);
    }
}
double withrawal(int x, double y)
{
    if (arrcount[0][x - 901] == 1)
    {
        if (arrcount[1][x - 901] >= y)
        {
            arrcount[1][x - 901] = arrcount[1][x - 901] - y;
            printf("Your balanc in account:%d is:%lf \n",x-901,arrcount[1][x - 901]);
        }
        else
        {
            printf("Not enouth money in the account.\n");
        }
    }
    else
    {
        printf("Account number %d is closed. \n",x);
    }
}
int closeAccount(int x)
{
    if (arrcount[0][x-901] == 1)
    {
        arrcount[0][x-901] = 0;
        printf("Account number %d was closed. \n",x);
    }
    else
    {
        printf("Account number %d is closed. \n",x);
    }
}
void interest(double y)
{
    for (int i = 0; i < numcount; i++)
    {
        if (arrcount[0][i] == 1)
        {
            arrcount[1][i] = arrcount[1][i] + arrcount[1][i] * (y/100);
        }
    }
}
int printAccount()
{
    for (int i = 0; i < numcount; i++)
    {
        if (arrcount[0][i] == 1)
        {
            printf("The Account is: %d Money in the account %lf \n",i+901,arrcount[1][i]);
        }
    }
}
int closeAllAccont ()

{
    for (int i = 0; i < numcount; i++)
    {
        if (arrcount[0][i] == 1)
        {
            arrcount[0][i]=0;
        }
    }
}



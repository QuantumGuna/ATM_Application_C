#include<stdio.h>

void balanceEnquiry(int n);
void withdraw(int n);
void depositMoney(int n);
int pin_change(int n);

void option(int n) {
    printf("Options: \n1. Balance Enquiry \n2. WithDraw Money \n3. Money Deposit\n4. Pin Change \n5. Exit \n");
    int a, p;
    printf("Enter Option(1/2/3/4/5): ");
    scanf("%d", &a);
    switch(a) {
        case 1: printf("1. Balance Enquiry\n");
                    balanceEnquiry(n); break;
        case 2: printf("2. WithDraw Money\n");
                    withdraw(n); break;
        case 3: printf("3. Money Deposit\n");
                    depositMoney(n); break;
        case 4: printf("4. Pin Change\n");
                    pin_change(n); break;
        case 5: printf("5. Exit\n");
                    printf("Transaction Failed...!"); break;
        default: printf("////Choose Given Option Only\\\\");
    }
}

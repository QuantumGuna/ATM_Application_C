#include<stdio.h>

extern int ID_array[];
extern float balances[];
extern int pin_list[];

int pin_check(int ID);

void balanceEnquiry(int n) {
    int p, found=0;
    if (!pin_check(n)) return;

    for (int i=0;i<5;i++) {
            found = 1;
            if (ID_array[i] == n) {
                printf("Your Current Balance is : %.2f", balances[i]);
            }
        }
}

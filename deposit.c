#include<stdio.h>

extern int ID_array[];
extern float balances[];
extern int pin_list[];

int pin_check(int ID);

void depositMoney(int ID) {
    float amount;
    int found = 0;
    if (!pin_check(ID)) return;
    for (int i=0;i<5;i++) {
        if (ID_array[i]==ID) {
            found = 1;
            printf("Enter the Amount to Deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                printf("Money Deposit Successful...!\n");
                balances[i] += amount;
                printf("Updated Balance: %.2f\n", balances[i]);

            }
            break;
        }
    }
    if (!found)
        printf("Invalid ID");

}

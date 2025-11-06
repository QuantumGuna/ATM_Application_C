#include<stdio.h>

extern int ID_array[];
extern float balances[];
extern int pin_list[];

int pin_check(int ID);

void withdraw(int ID) {
    float amount;
    int found = 0, i;
    if (!pin_check(ID)) return;
    for (int i=0;i<5;i++) {
        if (ID_array[i]==ID) {
            found = 1;
            printf("Enter your withdraw Amount: ");
            scanf("%f", &amount);
            if (amount <= balances[i]) {
                printf("Money With Drawn Successful...!\n");
                balances[i] -= amount;
                printf("Remaining Balance: %.2f\n", balances[i]);

            } else {
                printf("Insufficient Balance...");
            }
            break;
        }
    }
    if (!found)
        printf("Invalid ID");

}

#include<stdio.h>

extern int ID_array[];
extern float balances[];
extern int pin_list[];

int pin_change(int ID) {
    int p, np;
    for (int i=0;i<5;i++) {
        if (ID_array[i] == ID) {
            printf("Enter Your Old 4 Digit  pin: ");
            scanf("%d", &p);
            if (pin_list[i] == p) {
                printf("\nEnter Your New Pin: ");
                scanf("%d", &np);
                pin_list[i] == np;
                printf("Your New Pin is %d", np);
                break;
            } else {
                printf("Invalid Pin...!");
            }
        }
    }
    return 0;
}

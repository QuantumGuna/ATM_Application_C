#include<stdio.h>

extern int ID_array[];
extern float balances[];
extern int pin_list[];

int pin_check(int ID) {
    int p;

    for (int i=0;i<5;i++) {
        if (ID_array[i] == ID) {
            printf("Enter Your 4 Digit  pin: ");
            scanf("%d", &p);
            if (pin_list[i] == p) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    printf("Invalid Pin...!");
    return 0;
}

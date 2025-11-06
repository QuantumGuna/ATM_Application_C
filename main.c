#include <stdio.h>
#include <stdlib.h>

void option(int n);
void balanceEnquiry(int n);
void depositMoney(int n);

int ID_array[] = {202512, 202513, 202514, 202515, 202516};
float balances[] = {1254.35, 2546.48, 2456.85, 25468.84, 2364.12};
int pin_list[] = {2234, 1243, 5435, 2543, 8734};
char names[5][20] = {"Tony", "Steve", "Thor", "Natasha", "Banner"};

int main()
{
    int ID, found = 0;
    printf("///////Welcome to GSJ Bank/////////");
    printf("\nEnter your 6 Digit ID: ");
    scanf("%d", &ID);

    for (int i=0;i<5;i++) {
        if (ID_array[i] == ID) {
            printf("Account Found..!\n");
            printf("Welcome Mr./Mrs. %s\n", names[i]);
            option(ID);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not Matched");
    }
    printf("\nThank You for Using GSJ ATM Services...");
    return 0;
}

//structure2
#include <stdio.h>
#include <string.h>

typedef struct customer {
    int accountnumber;
    char name[50];
    float balance;
} customer;

// (a) Print customers with balance below 100
void printLowBalance(customer c[], int n) {
    printf("\nCustomers having balance below Rs.100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", c[i].accountnumber, c[i].name);
        }
    }
}

// (b) Deposit / Withdrawal function
void transaction(customer c[], int n, int accno, float amt, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].accountnumber == accno) {

            if (code == 1) {     // Deposit
                c[i].balance += amt;
                printf("\nAmount deposited successfully.\n");
            } 
            else if (code == 0) { // Withdrawal
                if (c[i].balance < amt) {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                    return;
                } else {
                    c[i].balance -= amt;
                    printf("\nAmount withdrawn successfully.\n");
                }
            }

            printf("Updated Balance = %.2f\n", c[i].balance);
            return;
        }
    }

    printf("\nAccount number not found!\n");
}

int main() {
    customer c[10];
    int n = 2;   // assume 2 customers for example

    // Customer 1
    c[0].accountnumber = 1025;
    strcpy(c[0].name, "Sarthak");
    c[0].balance = 50;

    // Customer 2
    c[1].accountnumber = 1035;
    strcpy(c[1].name, "Tithi");
    c[1].balance = 110;

    // (a)
    printLowBalance(c, n);

    // (b)
    int acc, code;
    float amt;

    printf("\Enter Account Number: ");
    scanf("%d", &acc);

    printf("Enter Amount: ");
    scanf("%f", &amt);

    printf("Enter Code (1 = Deposit, 0 = Withdrawal): ");
    scanf("%d", &code);

    transaction(c, n, acc, amt, code);

    return 0;
}

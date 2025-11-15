#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int roll;
    char name[100];
    char choice;

    // Open file in append mode so old data is not erased
    fp = fopen("students.csv", "a");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", name);   // Read full name including spaces

        // Write to CSV: Roll,Name
        fprintf(fp, "%d,%s\n", roll, name);

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("Records saved in students.csv (Open directly in Excel).\n");

    return 0;
}

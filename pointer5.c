//5.	Write a program that takes a set of names of individuals and abbreviates the first, middle and other names except the last name by their first letter.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length, i, lastSpaceIndex = -1;

    printf("Enter full name: ");
    fgets(name,100,stdin);  // Using gets() as you requested (but note: unsafe in real use)

    length = strlen(name);

    // Find position of last space (before last name)
    for (i = length - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    // Print initials for all names except the last one
    printf("Abbreviated form: ");
    printf("%c.", name[0]);  // First letter of first name

    for (i = 1; i < lastSpaceIndex; i++) {
        if (name[i] == ' ') {
            printf(" %c.", name[i + 1]);  // First letter after each space
        }
    }

    // Print last name in full
    if (lastSpaceIndex != -1)
        printf(" %s\n", &name[lastSpaceIndex + 1]);
    else
        printf(" %s\n", name);  // If only one name entered

    return 0;
}

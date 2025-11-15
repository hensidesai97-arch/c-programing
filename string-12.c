#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int a = 0, e = 0, i= 0, o = 0, u = 0; // Counters for vowels
    int j;

    printf("Enter a string: ");
    fgets(str,100,stdin);  // using gets() as you requested (unsafe in real use)

    // Convert string to lowercase and count vowels
    for (j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);  // handle both uppercase/lowercase
        if (ch == 'a')
            a++;
        else if (ch == 'e')
            e++;
        else if (ch == 'i')
            i++;
        else if (ch == 'o')
            o++;
        else if (ch == 'u')
            u++;
    }

    // Print frequencies
    printf("\nFrequency of each vowel:\n");
    printf("A or a = %d\n", a);
    printf("E or e = %d\n", e);
    printf("I or i = %d\n", i);
    printf("O or o = %d\n", o);
    printf("U or u = %d\n", u);

    return 0;
}

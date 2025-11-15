//2.	Instead of characters, accept one line at a time from the user and write it into the file.(Hint: use gets() and fputs())
#include <stdio.h>
#include<string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter lines of text (type END to stop):\n");

    while (1) {
        fgets(line,200,stdin);   // Accept a full line from user

        if (strcmp(line, "END") == 0)   // Stop when user types END
            break;

        fputs(line, fp);    // Write the line to the file
        fputs("\n", fp);    // Add newline to file
    }

    fclose(fp);

    printf("Data written to output.txt\n");

    return 0;
}

//3.	Read a content of the file line by line. (Hint: fgets())
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Reading file content line by line:\n");

    // Read the file line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // Print each line
    }

    fclose(fp);  // Close the file

    return 0;
}

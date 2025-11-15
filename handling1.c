//1.	Read a file and count no.of lines, words, characters, spaces, in it.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int in_word = 0;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            in_word = 0;
        else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    printf("Spaces: %d\n", spaces);

    return 0;
}

//structure4
#include <stdio.h>
#include <string.h>

struct cricketer {
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
};

int main() {
    struct cricketer c[10], temp;

    // Input data for 10 cricketers
    printf("Enter details of 10 cricketers:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Age: ");
        scanf("%d", &c[i].age);

        printf("Enter Number of Test Matches: ");
        scanf("%d", &c[i].testMatches);

        printf("Enter Average Runs: ");
        scanf("%f", &c[i].averageRuns);
    }

    // Sorting in ascending order of average runs
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (c[i].averageRuns > c[j].averageRuns) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // Output (Sorted List)
    printf("\n--- Cricketers Sorted by Average Runs (Ascending Order) ---\n");

    for (int i = 0; i < 10; i++) {
        printf("\nName: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("Test Matches: %d\n", c[i].testMatches);
        printf("Average Runs: %.2f\n", c[i].averageRuns);
    }

    return 0;
}

//structure3
#include <stdio.h>

struct student_data {
    int rollno;
    char name[50];
    float physics;
    float maths;
    float chemistry;
    float total;
};

int main() {
    struct student_data s;

    // Input
    printf("Enter Roll No: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Physics Marks: ");
    scanf("%f", &s.physics);

    printf("Enter Maths Marks: ");
    scanf("%f", &s.maths);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &s.chemistry);

    // Calculate total
    s.total = s.physics + s.maths + s.chemistry;

    // Output
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Physics: %.2f\n", s.physics);
    printf("Maths: %.2f\n", s.maths);
    printf("Chemistry: %.2f\n", s.chemistry);
    printf("Total Marks: %.2f\n", s.total);

    return 0;
}

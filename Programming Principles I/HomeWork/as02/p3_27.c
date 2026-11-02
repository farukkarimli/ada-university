#include <stdio.h>

int main(void) {
    int passes = 0;
    int failures = 0;
    int studentCourses = 1;
    int result;

    while (studentCourses <= 10) {
        printf("Enter result (1 for pass, 2 for fail): ");
        scanf("%d", &result);

        while (result != 1 && result != 2) {
            printf("Invalid input! Enter 1 (pass) or 2 (fail): ");
            scanf("%d", &result);
        }

        if (result == 1) {
            passes++;
        } else {
            failures++;
        }

        studentCourses++;
    }

    printf("\nPassed: %d\n", passes);
    printf("Failed: %d\n", failures);

    if (passes > 8) {
        printf("Bonus to instructor!\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int marks[5], i, total_marks = 0;
    float percentage;
    char grade;

    // Get the marks of the student in five subjects
    for (i = 0; i < 5; i++) {
        printf("Enter the marks of subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total_marks += marks[i];
    }

    // Calculate the percentage
    percentage = (float)total_marks / 500 * 100;

    // Determine the grade based on the percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Print the results
    printf("Total marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}



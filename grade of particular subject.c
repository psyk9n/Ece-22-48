#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the marks obtained: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else if (marks >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}

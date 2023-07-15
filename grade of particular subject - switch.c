#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the marks obtained: ");
    scanf("%f", &marks);

    int gradeRange = (int)(marks / 10); // Calculate the grade range

    switch (gradeRange) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);

    return 0;
}

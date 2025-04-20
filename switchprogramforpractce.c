//Quick Quiz: Write a program to find grade of a student given his 
//marks based on below:
// 90 – 100 => A
// 80 – 90 => B
// 70 – 80 => C
// 60 – 70 => D
// 50 – 60 => E
// <50 => F
#include <stdio.h>
int main() {
    int marks;
    // Input marks from the user
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);
    // Check if marks are within the valid range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Marks should be between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }
    // Use integer division to map marks to a single-digit value
    int gradeCategory = marks / 10;
    // Determine the grade using a switch statement
    switch (gradeCategory) {
        case 10: // Marks are 100
        case 9:  // Marks are 90-99
            printf("Grade: A\n");
            break;
        case 8:  // Marks are 80-89
            printf("Grade: B\n");
            break;
        case 7:  // Marks are 70-79
            printf("Grade: C\n");
            break;
        case 6:  // Marks are 60-69
            printf("Grade: D\n");
            break;
        case 5:  // Marks are 50-59
            printf("Grade: E\n");
            break;
        default: // Marks are less than 50
            printf("Grade: F\n");
            break;
    }
return 0;
}
#include<stdio.h>
int main() {

    char studentName[50];
    double score;
    char grade;

    printf("Enter the student's name: ");
    fgets(studentName, 50, stdin);
    studentName[strcspn(studentName, "\n")] = '\0'; // Remove newline character from the input


    printf("Enter the student's score: ");
    scanf("%lf", &score);
// Input validation
    if (score < 0 || score > 100) {
        printf("ERROR!  Score must be between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }
    // Determine the grade based on the score
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("\n=======GRADE REPORT=======\n");
    printf("Student Name: %s\n", studentName);
    printf("Score: %.2f\n", score);
    printf("Letter Grade: %c\n", grade);
    //Switch for recommendations
   printf("\n=======RECOMMENDATION=======\n");
    switch (grade) {
        case 'A':
            printf("Recommendation: Excellent work! Keep it up!\n");
            break;
        case 'B':
            printf("Recommendation: Good job! You can do even better!\n");
            break;
        case 'C':
            printf("Recommendation: Fair performance. Consider reviewing the material.\n");
            break;
        case 'D':
            printf("Recommendation: Needs improvement. Seek help and study more.\n");
            break;
        case 'F':
            printf("Recommendation: Failing grade. Immediate action required to improve.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;

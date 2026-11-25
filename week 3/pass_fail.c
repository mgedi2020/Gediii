#include <stdio.h>
int main(){




    int score;
    printf("Enter the student's score: ");  
    scanf("%d", &score);

// Check if the score is 60 or above
if (score >= 60) {
// This block runs if the condition is true
// printf displays the success message
printf("You passed!\n");
} else {
// This block runs if the condition is false
printf("You failed. Try again!\n");
}
// Return 0 to signal successful program completion
return 0;



}
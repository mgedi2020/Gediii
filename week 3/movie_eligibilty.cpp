#include<stdio.h>
int main() {
    int age;
    int hasParentalConsent;
    int isWeekend;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Has parental consent? (1 for yes, 0 for no): ");
    scanf("%d", &hasParentalConsent);
    printf("Is it weekend? (1 for yes, 0 for no): ");
    scanf("%d", &isWeekend);

    // Compute eligibility using logical operators
// Condition: adult (>=18) OR (teen >=13 AND consent) OR (weekend AND age>=10)

   int canWatchMovie =(age>=18) || ((age>=13 && hasParentalConsent) || (isWeekend && age>=10));

    if (canWatchMovie) {
        printf("You can watch the movie.\n");
    } else {
        printf("Sorry, you cannot watch the movie.\n");
    }
// Compute discount eligibility
// Condition: senior (>=65) OR child (<=12) OR (weekend AND student age <=18)
    int isDiscountEligible = (age >= 65) || (age <= 12) || (isWeekend && age <= 18);
    if (isDiscountEligible) {
        printf("You qualify for a discount!.\n");
   
    }
    return 0;
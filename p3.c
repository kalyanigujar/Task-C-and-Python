// 3 Read a person’s name and age and check if they are eligible. Let’s assume eligibility means age ≥ 18.
#include <stdio.h>

int main() {
    char name[50];  // Increased size for name
    int age;        // Declare age variable

    printf("Enter your name: ");      // Prompt for name
    scanf("%s", name);                  // Read name input

    printf("Enter your age: ");    // Prompt for age
    scanf("%d", &age);           // Read age input

    if(age >= 18) {              // Check eligibility  It checks if the entered age is greater than or equal to 18:
                                 //If yes, it prints that the person is eligible.
                                    //If not, it prints that the person is not eligible.
        printf("%s, you are eligible.\n", name);  // If age is 18 or more:
    } else {                                       //Prints "You are not eligible"
        printf("%s, you are not eligible.\n", name);        // If age is less than 18:
    }

    return 0;
}

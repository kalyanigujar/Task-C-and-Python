//2 Reads two numbers from the user and performs all basic arithmetic operations .
#include <stdio.h>
#include <math.h>   // For power function

int main() {
    double num1, num2;   // Declare two double variables to store user input

    printf("Enter first number: ");  // Prompt user for first number
    scanf("%lf", &num1);             // Read first number

    printf("Enter second number: ");   // Prompt user for second number
    scanf("%lf", &num2);               // Read second number
                                       
    printf("\nResults:\n");           // Display results of arithmetic operations
    printf("Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);    // Addition
    printf("Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); // Subtraction
    printf("Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); // Multiplication

    if(num2 != 0) {    // Check for division by zero
        printf("Division: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);  // Division
        printf("Modulus: %.0lf %% %.0lf = %.0lf\n", num1, num2, (int)num1 % (int)num2);   // Modulus
    } else {      // Handle division by zero case
        printf("Division: Not possible (division by zero)\n");    // Division by zero
        printf("Modulus: Not possible (division by zero)\n");    // Modulus by zero
    }

    printf("Power: %.2lf ^ %.2lf = %.2lf\n", num1, num2, pow(num1, num2));   // Power

    return 0;   
}

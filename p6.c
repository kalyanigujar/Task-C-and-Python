#include <stdio.h>

int main() {
    int a, b, c; // Declare three integer variables

    printf("Enter three numbers: "); // Prompt user for input
    scanf("%d %d %d", &a, &b, &c);   // Read three integers from user

    if (a >= b && a >= c)  // Determine the greatest number
        printf("Greatest number is: %d\n", a);  // If 'a' is greatest
    else if (b >= a && b >= c)   // If 'b' is greatest
        printf("Greatest number is: %d\n", b); // Print 'b' as greatest
    else
        printf("Greatest number is: %d\n", c); // Otherwise, 'c' is greatest

    return 0;
}
 // 6. Read three numbers from the user and display the greatest number.
 //It uses if-else statements to compare the three numbers and determine which one is the greatest:
//If a is greater than or equal to both b and c, it prints a as the greatest.
//Else if b is greater than or equal to both a and c, it prints b as the greatest.
//Otherwise, it prints c as the greatest.
    //The program handles cases where two or more numbers are equal by using the >= operator.

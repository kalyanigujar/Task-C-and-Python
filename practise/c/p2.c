// 2. Check Even or Odd
#include <stdio.h>

int main() {
    int num;   // Declare an integer variable
    printf("Enter a number: ");   // Prompt user for input
    scanf("%d", &num);   // Read an integer from user

     // Check if the number is even or odd using modulus operator

    if(num % 2 == 0)   // If remainder is 0 when divided by 2, it's even
        printf("%d is Even\n", num);  // Print result
    else   // Otherwise, it's odd
        printf("%d is Odd\n", num);  // Print result

    return 0;
}

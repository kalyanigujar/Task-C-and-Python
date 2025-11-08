// 3. Find the Largest of Three Numbers
#include <stdio.h>

int main() {
    int a, b, c;  // Declare three integer variables
    printf("Enter three numbers: ");  // Prompt user for input
    scanf("%d %d %d", &a, &b, &c);   // Read three integers from user

    if(a > b && a > c)   // Check if 'a' is greater than both 'b' and 'c' logical
        printf("%d is the largest\n", a);   // Print result
    else if(b > c)   // Check if 'b' is greater than 'c'
        printf("%d is the largest\n", b);   // Print result
    else  // If neither 'a' nor 'b' is the largest, then 'c' must be the largest
        printf("%d is the largest\n", c);   // Print result

    return 0;
}

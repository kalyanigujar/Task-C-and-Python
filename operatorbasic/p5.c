#include <stdio.h>

int main() {
    int a = 5, b = 10;  // Initialize two integer variables

    a++;      // a = a + 1 => a = 6
    --b;      // b = b - 1 => b = 9
    a += b;   // a = a + b => a = 6 + 9 = 15  assignment
    b -= 5;   // b = b - 5 => b = 9 - 5 = 4

    printf("a = %d, b = %d\n", a, b); // Print the values of a and b

    return 0;
}

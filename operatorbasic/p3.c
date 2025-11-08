#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 9;  // Initialize three integer variables

    a += b;   // a = a + b => a = 5 + 7 = 12  assignment
    b += a;   // b = b + a => b = 7 + 12 = 19
    c -= b;   // c = c - b => c = 9 - 19 = -10

    printf("a = %d, b = %d, c = %d\n", a, b, c);  // Print the values of a, b, and c

    return 0;
}

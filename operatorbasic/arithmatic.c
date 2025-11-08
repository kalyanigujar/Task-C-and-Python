#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 9;  // Initialize three integer variables

    b = a + 10;   // b becomes 5 + 10 = 15
    a = b + c;    // a becomes 15 + 9 = 24
    c = a + b;    // c becomes 24 + 15 = 39

    printf("a = %d, b = %d, c = %d\n", a, b, c); // Print the values of a, b, and c

    return 0;
}

#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 9;  // Initialize three integer variables

    b = a * c;   // b = 5 * 9 = 45    assignment 
    c = b;       // c = 45
    a += c;      // a = a + c = 5 + 45 = 50

    printf("a = %d, b = %d, c = %d\n", a, b, c);  // Print the values of a, b, and c

    return 0;
}

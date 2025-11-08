#include <stdio.h>

int main() {
    int a = 5, b = 7, c = 9;  // Initialize three integer variables
    
    a = b = c = 9;  // Assign 9 to c, then b, then a
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);  // Print the values of a, b, and c
    
    return 0;
}

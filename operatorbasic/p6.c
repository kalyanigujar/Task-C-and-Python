#include <stdio.h>

int main() {
    int a = 5;

    ++a;      // pre-increment: a = 6
    a++;      // post-increment: a = 7
    a += 5;   // a = a + 5 => a = 12 assignment 
    a -= a;   // a = a - a => a = 0

    printf("a = %d\n", a);  // Print the value of a

    return 0;
}

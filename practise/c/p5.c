// print odd number rang 0 to 100 find sum 
#include <stdio.h>

int main() {
    int i, sum = 0;

    printf("Odd numbers from 0 to 100 are:\n");
    for (i = 1; i <= 100; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of odd numbers = %d\n", sum);
    return 0;
}

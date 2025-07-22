#include <stdio.h>

int main() {
    int a, b;
    long long result = 1;  // Use long long to handle larger results

    // Input base (a) and exponent (b)
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    // Calculate a^b
    int i;
    for ( i = 1; i <= b; i++) {
        result *= a;  // Multiply result by the base
    }

    // Print the result
    printf("%d^%d = %lld\n", a, b, result);

    return 0;
}


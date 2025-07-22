#include <stdio.h>

int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base = 2;
    int exponent = 3;
    int power = calculatePower(base, exponent);
    printf("%d^%d = %d\n", base, exponent, power);
    return 0;
}


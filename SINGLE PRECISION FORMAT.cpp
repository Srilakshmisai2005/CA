#include <stdio.h>

typedef union {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } raw;
} myfloat;

void printBinary(int n, int i) {
    for (int k = i - 1; k >= 0; k--)
        printf("%d", (n >> k) & 1);
}

void printIEEE(myfloat var) {
    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf(" | ");
    printBinary(var.raw.mantissa, 23);
    printf("\n");
}

int main() {
    myfloat var = {.f = 1259.125};
    printf("IEEE 754 representation of %f is:\n", var.f);
    printIEEE(var);
    return 0;
}


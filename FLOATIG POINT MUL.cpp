#include <stdio.h>
int main() {
    double numberOne, numberTwo, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &numberOne, &numberTwo);  
    // Calculating product
    product = numberOne * numberTwo;

    // %.3lf displays number up to 3 decimal point
    printf("Product = %.3lf", product);
    
    return 0;
}





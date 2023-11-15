#include<stdio.h>
int main()
{
    float num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("The sum of two numbers is: %.2f", sum);
   
    return 0;

}


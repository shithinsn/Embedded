
#include <stdio.h>

int main()
{
    int a, b, add, subtract, multiply;
    float divide;

    printf("Enter two integers separated by space: ");
    scanf("%d %d", &a, &b);

    add = a + b;
    subtract = a -b;
    multiply = a * b;

    printf("Sum = %d\n", add);
    printf("Difference = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);

    if (b != 0) {
        divide = a / (float)b; // typecasting
        printf("Division = %.2f\n", divide);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
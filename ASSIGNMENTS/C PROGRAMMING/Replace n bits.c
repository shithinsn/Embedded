#include <stdio.h>

int main()
{
    unsigned int num1, num2, pos, n;
    unsigned int mask;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    printf("Enter starting bit position: ");
    scanf("%u", &pos);

    printf("Enter number of bits: ");
    scanf("%u", &n);

    mask = (1U << n) - 1;

    num1 = num1 & ~(mask << pos);
    num1 = num1 | ((num2 & mask) << pos);

    printf("Result = %u", num1);

    return 0;
}
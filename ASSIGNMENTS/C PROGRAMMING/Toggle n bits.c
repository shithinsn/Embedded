#include <stdio.h>

int main()
{
    unsigned int num, pos, n;
    unsigned int mask = 0;
    int i;

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%u", &pos);

    printf("Enter number of bits: ");
    scanf("%u", &n);

    for (i = 0; i < n; i++)
    {
        mask = mask | (1U << (pos + i));
    }

    num = num ^ mask;

    printf("Result = %u", num);

    return 0;
}
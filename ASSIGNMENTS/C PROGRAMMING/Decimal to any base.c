#include <stdio.h>

void convert(int n, int base)
{
    char digits[] = "0123456789ABCDEF";
    char result[50];
    int i = 0;

    while (n > 0)
    {
        result[i] = digits[n % base];
        n = n / base;
        i++;
    }

    while (i > 0)
    {
        i--;
        printf("%c", result[i]);
    }
}

int main()
{
    int n, base;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Enter base (2-16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16)
        printf("Invalid base");
    else if (n == 0)
        printf("0");
    else
    {
        printf("Converted value = ");
        convert(n, base);
    }

    return 0;
}
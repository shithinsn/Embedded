#include <stdio.h>

void frequency(int n, int freq[])
{
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }
}

int main()
{
    int n, i;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    frequency(n, freq);

    for (i = 0; i < 10; i++)
    {
        printf("Digit %d = %d times\n", i, freq[i]);
    }

    return 0;
}
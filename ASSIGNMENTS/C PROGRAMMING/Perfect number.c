#include <stdio.h>

int isPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n))
        printf("%d is a Perfect Number", n);
    else
        printf("%d is not a Perfect Number", n);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, temp, i = 0, j;
    char str[20], ch;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    if (n < 0)
    {
        str[i++] = '-';
        n = -n;
    }

    if (n == 0)
    {
        str[i++] = '0';
    }
    else
    {
        while (n > 0)
        {
            str[i++] = (n % 10) + '0';
            n = n / 10;
        }

        j = (temp < 0) ? 1 : 0;

        for (int k = i - 1; k > j; k--, j++)
        {
            ch = str[k];
            str[k] = str[j];
            str[j] = ch;
        }
    }

    str[i] = '\0';

    printf("String = %s", str);

    return 0;
}
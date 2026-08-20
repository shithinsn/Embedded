#include <stdio.h>

int main()
{
    int a[100], n, r, i, j, temp;
    char direction;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions: ");
    scanf("%d", &r);

    printf("Enter direction (L/R): ");
    scanf(" %c", &direction);

    r = r % n;

    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < r; i++)
        {
            temp = a[0];

            for (j = 0; j < n - 1; j++)
                a[j] = a[j + 1];

            a[n - 1] = temp;
        }
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < r; i++)
        {
            temp = a[n - 1];

            for (j = n - 1; j > 0; j--)
                a[j] = a[j - 1];

            a[0] = temp;
        }
    }
    else
    {
        printf("Invalid direction");
        return 0;
    }

    printf("Rotated array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
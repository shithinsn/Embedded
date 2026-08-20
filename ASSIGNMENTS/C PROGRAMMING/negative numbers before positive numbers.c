#include <stdio.h>

int main()
{
    int a[100], result[100];
    int n, i, j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* Store negative numbers first */
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            result[j++] = a[i];
    }

    /* Store positive numbers and zero */
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            result[j++] = a[i];
    }

    printf("Rearranged array:\n");

    for (i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
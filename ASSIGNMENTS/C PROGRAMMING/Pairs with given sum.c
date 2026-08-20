#include <stdio.h>

int main()
{
    int a[100], n, target;
    int i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("Pair: %d + %d = %d\n",
                       a[i], a[j], target);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found");

    return 0;
}
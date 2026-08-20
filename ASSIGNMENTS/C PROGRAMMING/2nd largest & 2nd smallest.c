#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, smallest;
    int secondLargest, secondSmallest;
    int foundLargest = 0, foundSmallest = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = smallest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] < largest)
        {
            if (!foundLargest || a[i] > secondLargest)
            {
                secondLargest = a[i];
                foundLargest = 1;
            }
        }

        if (a[i] > smallest)
        {
            if (!foundSmallest || a[i] < secondSmallest)
            {
                secondSmallest = a[i];
                foundSmallest = 1;
            }
        }
    }

    if (foundLargest)
        printf("Second largest = %d\n", secondLargest);
    else
        printf("Second largest does not exist\n");

    if (foundSmallest)
        printf("Second smallest = %d", secondSmallest);
    else
        printf("Second smallest does not exist");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    printf("Odd numbers in the array: ");

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum += arr[i];

        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nSum of array: %d\n", sum);

    return 0;
}

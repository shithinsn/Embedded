/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int second_largest(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements:\n");
        return INT_MIN;
    }

    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
        printf("second largest element:\n");

    return second_largest;
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must have at least two elements:\n");
        return 0;
    }

    int arr[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int sec_largest = second_largest(arr, size);
    if (sec_largest != INT_MIN)
        printf("The 2nd largest element is: %d\n", sec_largest);

    return 0;
}


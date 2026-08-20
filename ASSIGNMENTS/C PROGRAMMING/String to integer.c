#include <stdio.h>

int main()
{
    char str[20];
    int i, num = 0;

    printf("Enter a number as a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Integer value = %d", num);

    return 0;
}
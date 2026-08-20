#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0, space = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (space == 0)
            {
                str[j++] = ' ';
                space = 1;
            }
        }
        else
        {
            str[j++] = str[i];
            space = 0;
        }
    }

    str[j] = '\0';

    printf("Cleaned string: %s", str);

    return 0;
}
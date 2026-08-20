#include <stdio.h>

int main()
{
    char str[200];
    int alphabet[26] = {0};
    int i, index, flag = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            index = str[i] - 'A';
            alphabet[index] = 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
            alphabet[index] = 1;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a pangram");
    else
        printf("The string is not a pangram");

    return 0;
}
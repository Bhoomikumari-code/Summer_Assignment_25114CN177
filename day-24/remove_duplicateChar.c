// This program help to remove the duplicate character
#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                while(str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
                j = i;
            }
        }
    }

    printf("After removing duplicates: %s", str);

    return 0;
}
// This program help to find the longest word 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[20], longest[20] = "";
    int i, j = 0;

    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
            word[j++] = str[i];
        else
        {
            word[j] = '\0';
            if(strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;

            if(str[i] == '\0')
                break;
        }
    }

    printf("%s", longest);

    return 0;
}
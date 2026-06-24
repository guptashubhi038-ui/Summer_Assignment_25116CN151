#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], longest[50];
    int i = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");

    while (word != NULL) 
    {
        if (strlen(word) > maxLen) 
        {
            maxLen = strlen(word);
            strcpy(longest, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
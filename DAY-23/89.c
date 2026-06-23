#include <stdio.h>

int main() 
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] == 1) 
        {
            printf("First Non-Repeating Character: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");
    return 0;
}
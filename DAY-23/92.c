#include <stdio.h>

int main() 
{
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] > max) 
        {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character: %c\n", maxChar);
    printf("Frequency: %d", max);

    return 0;
}
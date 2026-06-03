// C program to print all prime numbers between two given numbers
#include <stdio.h>

int main() 
{
    int start, end, i, j, isPrime;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) 
    {

        isPrime = 1;

        if (i <= 1) 
        {
            isPrime = 0;
        }
         else 
        {
            for (j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0) 
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
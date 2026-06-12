// C program to find the largest prime factor of a number
#include <stdio.h>

int main() 
{
    int n, i, largestPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    largestPrime = -1;

    while(n % 2 == 0) 
    {
        largestPrime = 2;
        n = n / 2;
    }

    for(i = 3; i <= n; i = i + 2) 
    {
        while(n % i == 0) 
        {
            largestPrime = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}
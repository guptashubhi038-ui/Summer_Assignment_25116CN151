#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, sum = 0, rem, digits = 0;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}
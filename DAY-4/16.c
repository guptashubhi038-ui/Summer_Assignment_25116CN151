//c program to print armstrong no. in a range 
#include <stdio.h>

int main() 
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers: ");

    for(int num = start; num <= end; num++) 
    {
        int temp = num, rem, sum = 0;

        while(temp > 0) 
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}
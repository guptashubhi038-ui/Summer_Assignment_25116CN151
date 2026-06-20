#include <stdio.h>

int main() 
{
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Row-wise Sum:\n");

    for(i = 0; i < r; i++) 
    {
        int sum = 0;
        for(j = 0; j < c; j++) 
        {
            sum += A[i][j];
        }
        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}
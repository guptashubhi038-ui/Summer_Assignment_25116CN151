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

    printf("Column-wise Sum:\n");

    for(j = 0; j < c; j++) 
    {
        int sum = 0;
        for(i = 0; i < r; i++) 
        {
            sum += A[i][j];
        }
        printf("Column %d Sum = %d\n", j + 1, sum);
    }

    return 0;
}
#include <stdio.h>

int main() 
{
    int a[50], b[50];
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common Elements: ");
    for(i = 0; i < n1; i++) 
    {
        found = 0;
        for(j = 0; j < n2; j++) 
        {
            if(a[i] == b[j]) 
            {
                found = 1;
                break;
            }
        }
        if(found)
            printf("%d ", a[i]);
    }

    return 0;
}
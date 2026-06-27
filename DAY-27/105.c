#include <stdio.h>

int main() 
{
    int roll;
    char name[50];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    if(marks>=90)
        printf("Grade : A\n");
    else if(marks>=75)
        printf("Grade : B\n");
    else if(marks>=60)
        printf("Grade : C\n");
    else if(marks>=40)
        printf("Grade : D\n");
    else
        printf("Grade : Fail\n");

    return 0;
}
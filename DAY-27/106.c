#include <stdio.h>

int main() 
{
    int empid;
    char name[50], department[30];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d",&empid);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",name);

    printf("Enter Department: ");
    scanf(" %[^\n]",department);

    printf("Enter Salary: ");
    scanf("%f",&salary);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n",empid);
    printf("Name        : %s\n",name);
    printf("Department  : %s\n",department);
    printf("Salary      : %.2f\n",salary);

    return 0;
}
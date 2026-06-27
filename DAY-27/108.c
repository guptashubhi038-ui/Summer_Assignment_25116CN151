#include <stdio.h>

int main() 
{
    char name[50];
    int roll;
    float m1,m2,m3,m4,m5,total,percentage;

    printf("Enter Student Name: ");
    scanf(" %[^\n]",name);

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    printf("Enter Marks of Subject 1: ");
    scanf("%f",&m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f",&m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f",&m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f",&m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f",&m5);

    total = m1+m2+m3+m4+m5;
    percentage = total/5;

    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n",name);
    printf("Roll No.   : %d\n",roll);
    printf("Total      : %.2f\n",total);
    printf("Percentage : %.2f%%\n",percentage);

    if(percentage>=90)
        printf("Grade : A+\n");
    else if(percentage>=75)
        printf("Grade : A\n");
    else if(percentage>=60)
        printf("Grade : B\n");
    else if(percentage>=40)
        printf("Grade : C\n");
    else
        printf("Result : Fail\n");

    return 0;
}
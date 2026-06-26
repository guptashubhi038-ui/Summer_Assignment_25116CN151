#include <stdio.h>

int main()
{
    int ans, score = 0;
    float percentage;

    printf(" WELCOME TO QUIZ APPLICATION\n");

    printf("\nQ1. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong! Correct Answer is 2 (;)\n");

    printf("\nQ2. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. Nested loop\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong! Correct Answer is 3 (do-while)\n");

    printf("\nQ3. Which function is used to take input in C?\n");
    printf("1. printf()\n2. scanf()\n3. gets()\n4. puts()\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong! Correct Answer is 2 (scanf())\n");

    printf("\nQ4. Which data type stores decimal values?\n");
    printf("1. int\n2. char\n3. float\n4. long\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong! Correct Answer is 3 (float)\n");

    printf("\nQ5. Which keyword is used to terminate a loop early?\n");
    printf("1. continue\n2. break\n3. return\n4. exit\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong! Correct Answer is 2 (break)\n");

    percentage = (score / 5.0) * 100;

    printf(" QUIZ RESULT\n");
    printf("Correct Answers : %d\n", score);
    printf("Wrong Answers   : %d\n", 5 - score);
    printf("Percentage      : %.2f%%\n", percentage);

    printf("Grade: ");

    if(score == 5)
        printf("A+ (Excellent)\n");
    else if(score == 4)
        printf("A (Very Good)\n");
    else if(score == 3)
        printf("B (Good)\n");
    else if(score == 2)
        printf("C (Average)\n");
    else
        printf("F (Need More Practice)\n");

    printf("\nThank you for playing the quiz!\n");

    return 0;
}
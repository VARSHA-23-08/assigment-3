#include <stdio.h>

int add(int a, int b);

int main()
{
    int choice;
    int num1 = 10;
    int num2 = 20;
    int result;

    printf("=== MENU ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Result = %d\n", result);
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        printf("Result = %d\n", result);
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        printf("Result = %d\n", result);
    }
    else if (choice == 4)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result = %d\n", result);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid Choice\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    while (choice > 0)
    {
        choice--;
    }

    do
    {
        printf("Processing...\n");
    } while (choice > 5);

    switch (choice)
    {
    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;

    default:
        printf("Other\n");
    }

    int marks = 80;

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }

    char grade = 'A';

    printf("

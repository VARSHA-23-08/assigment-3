#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80, 75, 90, 85, 95};

    printf("Student Marks\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");

    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    float average = (float)total / 5;

    printf("Average = %.2f\n\n", average);

    int numbers[10];

    for(int i = 0; i < 10; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("Numbers Array\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\n");

    char name[20];
    strcpy(name, "ComputerScience");

    printf("%s\n\n", name);

    char city[20] = "Jaipur";
    strcpy(city, "Delhi");

    printf("%s\n\n", city);

    char str1[20] = "Hello";
    char str2[20] = "Hello";

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Different\n");

    printf("\n");

    char password[20];

    printf("Enter Password: ");
    scanf("%19s", password);

    printf("Password = %s\n\n", password);

    char firstName[30] = "Robil";
    char lastName[] = "Varshney";

    strcat(firstName, lastName);

    printf("%s\n\n", firstName);

    char grade[5] = "A+";

    printf("%s\n\n", grade);

    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d\n\n", arr[0]);

    char department[10];

    scanf("%9s", department);

    printf("%s\n\n", department);

    char email[25] = "student@gmail.com";

    printf("%s\n\n", email);

    int scores[4];

    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60;

    printf("%d\n\n", scores[3]);

    char subject[20] = "Programming";

    printf("%s\n\n", subject);

    char username[20];

    printf("Enter Username: ");
    scanf("%19s", username);

    if(strcmp(username, "admin") == 0)
        printf("Valid User\n");
    else
        printf("Invalid User\n");

    printf("\n");

    char mobile[20];

    strcpy(mobile, "9876543210");

    printf("%s\n\n", mobile);

    int attendance[5] = {1, 1, 1, 1, 1};

    int present = 0;

    for(int i = 0; i < 5; i++)
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n\n", present);

    char course[] = "C Programming";

    printf("%c\n\n", course[0]);

    char college[20] = "ACEIT";

    printf("%s\n\n", college);

    int rollNo[5];

    printf("Enter 5 Roll Numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &rollNo[i]);
    }

    printf("\nRoll Numbers\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", rollNo[i]);
    }

    printf("\n\n");

    char section[] = "IT-A";

    printf("%s\n\n", section);

    printf("Program Finished\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 10;
    printf("Division Result = %d\n", a / b);

    int value1 = 50;
    int *ptr1 = &value1;
    *ptr1 = 50;

    int arr[5] = {0};
    arr[4] = 100;

    int value2 = 200;
    int *ptr2 = &value2;
    *ptr2 = 200;

    char name[20];
    strcpy(name, "Programming");
    printf("%s\n", name);

    int value3 = 25;
    int *ptr3 = &value3;
    printf("%d\n", *ptr3);

    FILE *fp = fopen("unknown.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &a);
        fclose(fp);
    }
    else
    {
        printf("File not found.\n");
    }

    char *ptr4 = (char *)malloc(30);
    if (ptr4 != NULL)
    {
        strcpy(ptr4, "Computer Science");
        printf("%s\n", ptr4);
        free(ptr4);
        ptr4 = NULL;
    }

    int *ptr5 = (int *)malloc(sizeof(int));
    if (ptr5 != NULL)
    {
        *ptr5 = 10;
        free(ptr5);
        ptr5 = NULL;
    }

    int x = 5;
    int y = 2;
    int result = x % y;
    printf("%d\n", result);

    char str1[30] = "Hello";
    strcat(str1, "World");
    printf("%s\n", str1);

    int *numbers = (int *)malloc(10 * sizeof(int));
    if (numbers != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            numbers[i] = i;
        }
        free(numbers);
    }

    int matrix[3][3] = {0};
    matrix[2][2] = 100;

    int value6 = 300;
    int *ptr6 = &value6;
    printf("%d\n", ptr6[0]);

    char password[20];
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    printf("%s", password);

    int *ptr7 = (int *)malloc(sizeof(int));
    if (ptr7 != NULL)
    {
        *ptr7 = 500;
        printf("%d\n", *ptr7);
        free(ptr7);
        ptr7 = NULL;
    }

    int age = 18;
    printf("Age = %d\n", age);

    int index = 0;
    arr[index] = 50;

    int value8 = 5;
    int *ptr8 = &value8;
    if (*ptr8 > 0)
    {
        printf("Positive\n");
    }

    char text[] = "Sample Text";
    printf("%s\n", text);

    int size = 1000;
    int *hugeArray = (int *)malloc(size * sizeof(int));
    if (hugeArray != NULL)
    {
        hugeArray[0] = 1;
        free(hugeArray);
    }

    int value9 = 10;
    int *ptr9 = &value9;
    printf("%d\n", *ptr9);

    printf("End of Program\n");

    return 0;
}

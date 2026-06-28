#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);
void printArray(int *arr, int size);

int main()
{
    int x = 10;
    int y = 20;

    int *ptr1 = &x;
    printf("%d\n", *ptr1);

    int *ptr2 = malloc(sizeof(int));
    if (ptr2 != NULL)
    {
        *ptr2 = 100;
        printf("%d\n", *ptr2);
        free(ptr2);
    }

    int *ptr3 = &x;
    printf("%d\n", *ptr3);

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr4 = arr;
    printf("%d\n", *(ptr4 + 2));

    int *ptr5 = malloc(sizeof(int));
    *ptr5 = 500;
    printf("%d\n", *ptr5);
    free(ptr5);
    ptr5 = NULL;

    int *ptr6 = malloc(sizeof(int));
    *ptr6 = 1000;
    free(ptr6);
    ptr6 = NULL;

    int *ptr7 = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
        ptr7[i] = i;
    free(ptr7);

    int *ptr8 = malloc(4 * sizeof(int));
    ptr8[0] = 10;
    ptr8[1] = 20;
    ptr8[2] = 30;
    ptr8[3] = 40;
    free(ptr8);

    int *ptr9 = malloc(sizeof(int));
    *ptr9 = 50;
    free(ptr9);
    ptr9 = NULL;

    int *ptr10 = malloc(sizeof(int));
    *ptr10 = 999;
    printf("%d\n", *ptr10);
    free(ptr10);

    int *numbers = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
        numbers[i] = i * 10;

    printArray(numbers, 5);
    free(numbers);

    int a = 100, b = 200;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    int value = 500;
    int *temp = &value;
    int **pptr = &temp;
    printf("%d\n", **pptr);

    char *name = malloc(12);
    strcpy(name, "Programming");
    printf("%s\n", name);
    free(name);

    int *ptr11 = malloc(2 * sizeof(int));
    ptr11[0] = 123;
    ptr11[1] = 456;
    ptr11++;
    printf("%d\n", *ptr11);
    ptr11--;
    free(ptr11);

    int *ptr12 = malloc(sizeof(int));
    *ptr12 = 25;
    if (*ptr12 > 0)
        printf("Positive\n");
    free(ptr12);

    int *ptr13 = malloc(101 * sizeof(int));
    for (int i = 0; i < 100; i++)
        ptr13[i] = i;
    ptr13[100] = 500;
    free(ptr13);

    int *ptr14 = malloc(sizeof(int));
    *ptr14 = 999;
    printf("%d\n", *ptr14);
    free(ptr14);

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *p = &matrix[0][0];
    printf("%d\n", *(p + 4));

    int *ptr15 = malloc(sizeof(int));
    *ptr15 = 111;
    printf("%d\n", *ptr15);
    free(ptr15);

    printf("End of Program\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);
int factorial(int n);
void swap(int *a, int *b);
int maximum(int a, int b);
int fibonacci(int n);
void calculateGrade(int marks);
float circleArea(float radius);
int sumArray(void);
void displayResult(void);

int main()
{
    int num1 = 10, num2 = 20;

    int result = add(num1, num2);
    printf("Sum = %d\n", result);

    float avg = average(70, 80, 90);
    printf("Average = %.2f\n", avg);

    int fact = factorial(5);
    printf("Factorial = %d\n\n", fact);

    int x = 100, y = 200;

    printf("Before Swap\n");
    printf("%d %d\n", x, y);

    swap(&x, &y);

    printf("After Swap\n");
    printf("%d %d\n\n", x, y);

    int max = maximum(15, 25);
    printf("Maximum = %d\n\n", max);

    int fib = fibonacci(10);
    printf("Fibonacci = %d\n\n", fib);

    int marks = 90;
    calculateGrade(marks);

    printf("\n");

    float area = circleArea(5);
    printf("Area = %.2f\n\n", area);

    int total = sumArray();
    printf("Sum of Array = %d\n\n", total);

    displayResult();

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void calculateGrade(int marks)
{
    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");
}

float circleArea(float radius)
{
    return 3.14159f * radius * radius;
}

int sumArray(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += arr[i];

    return sum;
}

void displayResult(void)
{
    printf("Program Executed Successfully\n");
}

void printMessage()
{
    printf("Welcome\n");
}

int calculatePercentage(int marks, int total)
{
    return (marks * 100) / total;
}

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

void displayMenu()
{
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

int power(int base, int exp)
{
    int result = 1;

    for (int i = 0; i < exp; i++)
        result *= base;

    return result;
}

int reverseNumber(int n)
{
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int countDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void updateValue(int *x)
{
    *x = 500;
}

int findMinimum(int a, int b)
{
    return (a < b) ? a : b;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int recursiveDemo(int n)
{
    if (n == 0)
        return 0;

    return recursiveDemo(n - 1);
}

void greet()
{
    printf("Hello Students\n");
}

float rectangleArea(float length, float width)
{
    return length * width;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

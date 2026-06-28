PROBLEM 1.C

The program contains multiple types of errors (syntax, semantic, logical, runtime, and warnings). Here's a detailed list.
Line
Error
Correction
8
Missing ; after int x = 10 (Syntax)
int x = 10;
13
if(x = 10) uses assignment instead of comparison (Logical)
if(x == 10)
18
Assigning string to int (Semantic)
int marks = 90; or char marks[] = "Ninety";
20
Variable z not declared (Semantic)
Declare int z; before use.
22
100 = x; Left side is not assignable (Syntax/Semantic)
x = 100;
26
float *ptr = &x; Type mismatch (x is int) (Semantic)
int *ptr = &x;
28
%f used for integer x (Semantic)
printf("%d\n", x);
33
Division by zero (a/b) (Runtime)
Ensure b != 0 before division.
35
'AB' is a multi-character constant (Warning/Semantic)
char ch = 'A';
37–40
Both if and else print the same message (Logical)
else printf("Y is greater"); (or appropriate message)
42
Return value of sqrt(25) ignored (Logical/Warning)
double r = sqrt(25); or print the result.
44
show(); Function not declared/defined (Linker/Semantic)
Define show() or remove the call.
46
while(x < 15); has an unwanted semicolon (Logical)
while(x < 15)
52
continue; used outside a loop (Syntax)
Remove it or place it inside a loop.
54
break; used outside a loop/switch (Syntax)
Remove it or place it inside a loop/switch.
56
calculate(10) called with one argument, but function requires two (Semantic)
calculate(10, 20);
65
Function definition expects two parameters but call supplied one (Related semantic error)
Match the function call with the definition.
Summary
Syntax Errors: 4
Semantic Errors: 6
Logical Errors: 4
Runtime Errors: 1
Warnings: 2
Total issues identified: 17

PROBLEM2.C
Here are the errors in problem2.c.
Line
Error
Correction
8
Missing semicolon after int num2 = 20
int num2 = 20;
20
Missing closing parenthesis in if(choice == 1
if(choice == 1)
32
Extra closing parenthesis in else if(choice == 3))
else if(choice == 3)
48
Missing closing parenthesis in for(int i=0; i<5; i++
for(int i=0; i<5; i++)
55
Missing closing parenthesis in while(choice > 0
while(choice > 0)
63
Missing semicolon after while(choice > 5) in the do...while loop
while(choice > 5);
69
Missing colon after case 2
case 2:
93
Character literal not closed: char grade = 'A;
char grade = 'A';
97
Missing closing bracket in array declaration int arr[5;
int arr[5];
120
Missing semicolon after printf("End of Program\n")
printf("End of Program\n");
122
Missing closing brace } for the extra block opened at line 108
Add } before return 0;
Logical/Semantic Errors
Line
Error
Correction
40
Integer division (10/20) results in 0 because both operands are integers.
Use float variables or cast: result = (float)num1 / num2; (and store in a float).
3
Function add() is declared but never used.
Either call add(num1, num2) or remove the unused function declaration/definition.
Total Errors Identified: 13
Syntax Errors: 11
Logical/Semantic Issues: 2

PROBLEM 3.C

Below are the errors in problem3.c.
Line
Error
Correction
8
Assigning string to int (int age = "Twenty";)
int age = 20;
14
Assigning string to char (char grade = "A";)
char grade = 'A';
16
%d used for float salary
printf("%f\n", salary);
18
%f used for int marks
printf("%d\n", marks);
22
Undeclared variable score
Declare score or replace with marks/correct variable.
25
Redeclaration of x in same scope
Remove second declaration: x = 20;
27
Assignment to constant (100 = x;)
x = 100;
31
%s used with integer num
printf("%d\n", num);
35
%d used for float pi
printf("%f\n", pi);
39
Array index is float (arr[2.5])
Use integer index, e.g. arr[2] = 100;
43
Function add() called with one argument
result = add(10, 20);
51
average() called with only two arguments
avg = average(10, 20, 30);
55
String assigned to int (temperature)
int temperature = 35;
59
String assigned to float (discount)
float discount = 10.5;
65
Cannot assign string directly to array (name = "Robil";)
strcpy(name, "Robil"); (include <string.h>) or initialize during declaration.
69
Undeclared variable totalMarks
Declare it or replace with the correct variable.
73
%c used for integer number
printf("%d\n", number);
77
%d used for float rate
printf("%f\n", rate);
84
Undeclared variable c in add(a,b,c)
sum = add(a, b);
94
Assignment instead of comparison (studentMarks = 100)
if (studentMarks == 100)
99
String assigned to int size
Use integer value or declare as string (char size[] = "Large";).
103
%d used for float percentage
printf("%f\n", percentage);
107
String used as array index (arr2["five"])
Use integer index, e.g. arr2[5] = 100;
115
case "2": uses string instead of integer
case 2:
122
multiply() not declared/defined
Define the function or replace with a valid function.
130
%d used for float areaRect
printf("%f\n", areaRect);
138
Returning float from average() into int avgMarks
Declare float avgMarks;
140
%d used for avgMarks if changed to float
printf("%f\n", avgMarks);
144
Undeclared variable value
Declare value or print data.
146
String assigned to int employeeId
char employeeId[] = "EMP101";
148
%d used for string employeeId
printf("%s\n", employeeId);

PROBLEM 4.C

Below are the errors in problem4.c.
Line No.
Error
Correction
45
generateReport(); is called without any declaration or definition.
Add a function prototype before main() and define generateReport(), or remove the call.
47
displayEmployee(); is called but no declaration/definition exists. Only employeeSection() is defined.
Replace displayEmployee(); with employeeSection(); or create displayEmployee().
49
processData(); is called but not declared or defined.
Declare and define processData() or remove the call.
51
saveRecord(); is called but not declared or defined.
Declare and define saveRecord() or remove the call.
53
loadRecord(); is called but not declared or defined.
Declare and define loadRecord() or remove the call.
55
printInvoice(); is called but not declared or defined.
Declare and define printInvoice() or remove the call.
57
calculateTax(); is called but not declared or defined.
Declare and define calculateTax() or remove the call.
59
validateUser(); is called but not declared or defined.
Declare and define validateUser() or remove the call.
61
sendNotification(); is called but not declared or defined.
Declare and define sendNotification() or remove the call.
63
generateCertificate(); is called but not declared or defined.
Declare and define generateCertificate() or remove the call.
10
showResult() is declared but never defined.
Add the definition of showResult().
5
calculateSalary(float basic) is declared but never defined.
Add the definition of calculateSalary().
7
printStudentDetails() is declared but never defined.
Add the definition of printStudentDetails().
9
calculateAverage(int,int,int) is declared but never defined.
Add the definition of calculateAverage().
12
extern float companyProfit; is declared but no global definition exists. This causes a linker error.
Define it, e.g. float companyProfit = 0.0f;.
Summary
Syntax errors: None.
Semantic/Compilation errors: Missing function definitions and undeclared function calls.
Linker errors: Missing definitions for companyProfit, calculateSalary(), printStudentDetails(), showResult(), calculateAverage(), and several called functions.
Logical errors: No major logical errors in the implemented functions; the primary issue is incomplete program implementation.
For the GitHub submission, take a screenshot of this error table and upload it as instructed.

PROBLEM 5.C
Below are the errors identified in problem5.c.
Line
Error
Correction
11
Division by zero (a / b where b = 0)
Check b != 0 before dividing.
15
Dereferencing a NULL pointer (*ptr1 = 50)
Allocate memory or point to a valid variable before dereferencing.
19
Array index out of bounds (arr[10])
Use a valid index (0–4).
23
Uninitialized pointer ptr2 is dereferenced
Allocate memory (malloc) or assign a valid address before use.
27
Buffer overflow: strcpy(name, "Programming") into char name[5]
Increase array size or copy a shorter string.
33
Uninitialized pointer ptr3 is dereferenced
Initialize the pointer before dereferencing.
39
fopen() result is not checked
Verify fp != NULL before using fscanf().
41
fscanf() may use a NULL file pointer
Read only if fp is valid.
47
Buffer overflow: copying "Computer Science" into 5-byte allocation
Allocate enough memory (e.g., malloc(strlen(...) + 1)).
53
Use-after-free (ptr4[0] after free(ptr4))
Do not access freed memory; optionally set ptr4 = NULL.
59
Double free (free(ptr5) twice)
Free memory only once; set pointer to NULL after freeing.
65
Modulo by zero (x % y, y = 0)
Check y != 0 before modulo.
69
strcat() causes buffer overflow
Increase str1 size or use bounded string functions.
77
Writing beyond allocated memory (numbers[0..9] but only 3 elements allocated)
Allocate 10 elements or loop only to 3.
85
Matrix index out of bounds (matrix[5][5])
Use indices in the range 0–2.
89
NULL pointer dereference (ptr6[0])
Allocate memory or point to valid data.
93
gets() is unsafe and removed from C
Use fgets(password, sizeof(password), stdin).
101
Use-after-free (*ptr7 = 1000 after free(ptr7))
Do not access memory after freeing it.
105
Uninitialized variable age is printed
Initialize age or read its value before printing.
109
Negative array index (arr[-1])
Use a valid index (0–4).
113
Uninitialized pointer ptr8 is dereferenced in if
Initialize ptr8 before use.
119
Printing a NULL string pointer with %s
Ensure text points to a valid string or check for NULL.
127
malloc() result is not checked
Verify hugeArray != NULL before accessing it.
137
Infinite loop incrementing pointer (while(1) { ptr9++; })
Remove the infinite loop or use a proper termination condition.
Summary
Runtime errors: Division/modulo by zero, NULL pointer dereference, use-after-free, double free, invalid file access.
Memory errors: Buffer overflows, array out-of-bounds access, writing beyond allocated memory.
Logical errors: Infinite loop, printing uninitialized variables, unchecked malloc()/fopen().
Unsafe function: Replace gets() with fgets().

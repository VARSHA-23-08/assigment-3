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

PROBLEM 6.C

Below are the errors in problem6.c.
Line
Error
Correction
13
Logic error: num % 2 == 1 prints "Number is Even"
Change to printf("Number is Odd\n");
15
Logic error: else prints "Number is Odd"
Change to printf("Number is Even\n");
23
Grade for marks ≥ 90 is incorrectly Grade B
Change to printf("Grade A\n");
25
Grade for marks ≥ 80 is incorrectly Grade A
Change to printf("Grade B\n");
37
Leap year check is incomplete
Use `if((year % 400 == 0)
48
age > 18 prints Not Eligible for Voting
Change to printf("Eligible for Voting\n");
50
else prints Eligible for Voting
Change to printf("Not Eligible for Voting\n");
58
If a > b, it prints a as the smaller number
Print b instead.
60
Else prints b as the smaller number
Print a instead.
70
if(y < largest) while finding largest
Change to if(y > largest)
73
if(z < largest) while finding largest
Change to if(z > largest)
84
average = totalMarks / subjects; performs integer division
Use average = (float)totalMarks / subjects;
93
Circle area formula is incorrect (2 * π * r²)
Use area = 3.14 * radius * radius;
103
Bonus for salary > 30000 is only 2%
Change to 0.20 (or required percentage).
105
Else bonus is 20%
Usually should be 0.02 (or lower bonus).
116
case 1 prints February
Print January.
120
case 2 prints March
Print February.
124
case 3 prints April
Print March.
128
case 4 prints May
Print April.
143
isPrime = 1; when a divisor is found
Change to isPrime = 0;
149
Prints Not Prime when isPrime is true
Change to printf("Prime\n");
151
Prints Prime in else
Change to printf("Not Prime\n");
163
finalAmount = purchaseAmount + discount;
Change to finalAmount = purchaseAmount - discount;
173
sum = i; only stores the last value
Change to sum += i;
183
temperature < 40 prints Cold Weather
Change to printf("Hot Weather\n"); (or use a lower threshold).
185
Else prints Hot Weather
Change to printf("Cold Weather\n");
193
Grade 'A' prints Average Performance
Change to printf("Excellent Performance\n");
195
Else prints Excellent Performance
Change to appropriate message such as printf("Average Performance\n");
204
Rectangle area calculated as length + width
Change to rectangleArea = length * width;
212
percentage >= 60 prints Fail
Change to printf("Pass\n");
214
Else prints Pass
Change to printf("Fail\n");
Summary:
Syntax errors: 0
Semantic/Logical errors: 29
Compilation: The program compiles successfully, but produces many incorrect outputs due to logical mistakes.

PROBLEM 7.C

Below are the errors identified in problem7.c.
Line No.
Error
Correction
9
Loop condition i <= 5 accesses marks[5] (out of bounds).
Change to i < 5.
25
average = total / 5; performs integer division.
Use average = total / 5.0; or (float)total / 5;.
33
Loop starts from i = 1, leaving numbers[0] uninitialized.
Start from i = 0.
33
Condition i <= 10 writes to numbers[10] (out of bounds).
Change to i < 10.
48
strcpy(name, "ComputerScience"); copies a string larger than name[10].
Increase array size or use a shorter string.
56
city = "Delhi"; is invalid because arrays cannot be assigned.
Use strcpy(city, "Delhi");.
63
if(str1 == str2) compares addresses instead of string contents.
Use if(strcmp(str1, str2) == 0).
76
gets(password); is unsafe and removed from C.
Use fgets(password, sizeof(password), stdin);.
84
strcat(firstName, lastName); overflows firstName[20].
Increase array size or use strncat().
94
grade is not null-terminated before printing as a string.
Add grade[2] = '\0';.
100
arr[-1] is an invalid array index.
Use a valid index such as arr[0].
108
scanf("%s", department); may overflow the buffer.
Use scanf("%9s", department);.
114
"student@gmail.com" exceeds email[15].
Increase array size (e.g. char email[30];).
122
scores[3] = 60; writes beyond scores[3].
Remove it or declare scores[4].
124
printf("%d\n", scores[3]); accesses out of bounds.
Print scores[2] or enlarge the array.
136
if(username == "admin") compares pointers.
Use if(strcmp(username, "admin") == 0).
148
strcpy(mobile, "987654321012"); overflows mobile[10].
Increase array size or shorten the string.
158
Loop condition i <= 5 accesses attendance[5].
Change to i < 5.
166
course[20] is out of bounds.
Access a valid index (e.g. course[0]).
178
college is not null-terminated before printing.
Add college[5] = '\0';.
194
char section[3] = "IT-A"; array is too small.
Use char section[5] = "IT-A";.
Total errors identified: 20

PROBLEM 8.C

Below are the errors identified in problem8.c.
Line No.
Error
Correction
16
add(num1) called with only 1 argument
add(num1, num2);
22
average(70,80) called with only 2 arguments
average(70, 80, 90); (or provide any third value)
60
calculateGrade() used without declaration/definition
Declare and define calculateGrade() or remove the call.
68
circleArea() used without declaration/definition
Declare and define circleArea() before using it.
76
sumArray() called without required arguments and not defined
Define sumArray() and pass an array with its size.
82
displayResult() used without declaration/definition
Declare and define displayResult().
95
factorial(0) returns 0
Base case should be return 1;.
113
maximum() returns the smaller value
Change to if(a>b) return a; else return b;
127
Fibonacci recursion is incorrect (fibonacci(n))
Use return fibonacci(n-1) + fibonacci(n-2);
148
simpleInterest() has return type float but uses return;
Replace with return si;
162
power() loop runs one iteration less
Use for(int i=0; i<exp; i++) or for(int i=1; i<=exp; i++)
178
reverseNumber() has no return statement
Add return rev;
197
isPrime() returns 1 when a divisor is found
Return 0 inside the loop and 1 after the loop.
220
printArray() loop uses <= size
Change to i < size.
229
recursiveDemo() has infinite recursion
Add a base case, e.g. if(n==0) return 0;.
239
rectangleArea() returns addition
Return length * width;
249
cube() calculates square instead of cube
Return n * n * n;
65–69
area declared as int although circleArea() should return float
Declare float area; and print using %f.
Total Errors Identified: 17
These include syntax/interface errors (wrong function calls, missing declarations), logical errors (incorrect algorithms), and semantic errors (wrong return values/types).

PROBLEM 9.C

Below are the errors identified in problem9.c.
Line
Error
Correction
13
ptr1 is uninitialized and dereferenced.
Initialize it before use, e.g. ptr1 = &x;
17
Dereferencing NULL (*ptr2 = 100;).
Allocate memory or point it to a valid variable before dereferencing.
27
ptr3++ moves beyond variable x and is dereferenced.
Do not increment a pointer to a single variable.
35
*(ptr4 + 10) accesses beyond array bounds.
Use a valid index (0–4).
45
Using *ptr5 after free(ptr5) (dangling pointer).
Do not access after free; set ptr5 = NULL.
53
Memory leak: allocated memory is lost by ptr6 = NULL.
Call free(ptr6); before assigning NULL.
57
malloc(5) allocates only 5 bytes, not enough for 5 integers.
ptr7 = malloc(5 * sizeof(int));
59
Loop writes 10 integers into space for only 5.
Loop should be i < 5.
71
ptr8[3] writes outside allocated memory (only 3 elements).
Allocate 4 elements or remove the assignment.
81
Double free(ptr9);.
Free only once and set pointer to NULL.
87
Reading uninitialized memory (*ptr10).
Initialize *ptr10 before printing.
95
Loop condition i <= 5 writes 6 elements into a 5-element array.
Change to i < 5.
107
pptr = &value; has incompatible pointer types (int ** vs int *).
Use int *p = &value; int **pptr = &p;
111
strcpy() used without including <string.h>.
Add #include <string.h>.
111
Buffer of 5 bytes is too small for "Programming".
Allocate enough memory, e.g. malloc(strlen("Programming")+1).
121
ptr11++ then dereference accesses invalid memory.
Do not increment before dereferencing.
127
Dereferencing NULL in if(*ptr12 > 0).
Check ptr12 != NULL first.
139
ptr13[100] is out of bounds (valid indices: 0–99).
Use ptr13[99] or allocate 101 elements.
147
Writing to ptr14 after free().
Do not use after free; allocate again if needed.
153
p = matrix; causes incompatible pointer type warning.
Use p = &matrix[0][0];.
155
*(p + 20) accesses outside the 3×3 matrix.
Access only indices 0–8.
159–161
Memory leak: first allocation to ptr15 is lost by second malloc().
free(ptr15); before reallocating or reuse the same allocation.
170–173
swap() swaps local pointers instead of values.
Use int temp = *a; *a = *b; *b = temp;.
177
for(i <= size) prints one element beyond the array.
Change to i < size.
These include syntax, semantic, logical, runtime, memory management, pointer, and array boundary errors present in problem9.c.

PROBLEM 10.C

Below are the errors in problem10.c.
Line
Error
Correction
12
Missing ; after int choice = 1
int choice = 1;
14
Assigning string to int (int marks = "90";)
int marks = 90;
20
add(a) called with one argument
add(a, b);
24
Assignment in if(a = b)
if(a == b)
29
score not declared
Declare score or use the correct variable name
33
arr[10] out of bounds
Use index 0–4
35
arr[-1] invalid index
Use a valid index
39
Buffer overflow in strcpy()
Increase array size or copy a shorter string
45
Cannot assign string to character array (city = "Delhi";)
strcpy(city, "Delhi");
53
Comparing strings with ==
strcmp(user, "admin") == 0
61
Division by zero (x/y)
Check y != 0 before division
65
Dereferencing NULL pointer
Allocate memory or point to a valid object
69
Using uninitialized pointer ptr2
Initialize before dereferencing
79
Using memory after free(ptr3)
Do not access after free()
81
Double free(ptr3)
Remove second free() or set pointer to NULL
85
malloc(5) allocates only 5 bytes
malloc(5 * sizeof(int))
87–90
Writing 10 elements into space for 5
Allocate enough memory or loop to 5
96
Memory leak (ptr5 reassigned)
Free first allocation before reassigning
100
average(70,80) missing third argument
average(70,80,90);
105–108
Eligibility logic reversed
if(age >= 18) printf("Eligible"); else printf("Not Eligible");
117
Prime logic incorrect (isPrime = 1)
Set isPrime = 0; when divisible
123–126
Final prime output reversed
Print "Prime" if isPrime, otherwise "Not Prime"
130
calculateSalary() not declared/defined
Declare and define it or remove call
141
Missing : after case 1
case 1:
151
Multi-character constant 'AB'
Use 'A' or a string "AB"
158
scores[3] out of bounds
Maximum valid index is 2
162
Loop condition i<=3 exceeds array
i < 3
172
Incorrect area formula
area = 3.14 * radius * radius;
176
Extra ; after while(choice > 0)
Remove the semicolon
181
continue used outside loop
Remove it or place it inside a loop
191
Integer division in average()
return (a+b+c)/3.0; for floating-point result
136
fopen() result not checked
Verify fp != NULL before fscanf()
Total errors identified: 30

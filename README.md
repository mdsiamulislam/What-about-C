# What about C

Welcome to the "What about C" repository!

This repository serves as a comprehensive resource for learning and practicing C programming. Whether you're a beginner or an experienced programmer, you'll find valuable content here to enhance your understanding and skills in C programming.

## Purpose

The primary goal of this repository is to provide a structured approach to learning C programming through code breakdowns, projects, and problem-solving exercises. By exploring the content offered here, you'll gain a solid foundation in C programming and develop the confidence to tackle more complex challenges.

Certainly! Here's the complete text with all the sections included in one message:

## Table of Contents

- [C Syntax](#c-syntax)
- [C Output](#c-output)
- [C Comments](#c-comments)
- [C Variables](#c-variables)
- [C Data Types](#c-data-types)
- [C Constants](#c-constants)
- [C Operators](#c-operators)
- [C Booleans](#c-booleans)
- [C If...Else](#c-ifelse)
- [C Switch](#c-switch)
- [C While Loop](#c-while-loop)
- [C For Loop](#c-for-loop)
- [C Break/Continue](#c-breakcontinue)
- [C Arrays](#c-arrays)
- [C Strings](#c-strings)
- [C User Input](#c-user-input)
- [C Memory Address](#c-memory-address)
- [C Pointers](#c-pointers)
- [C Functions](#c-functions)
- [C Function Parameters](#c-function-parameters)
- [C Function Declaration](#c-function-declaration)
- [C Recursion](#c-recursion)
- [C Math Functions](#c-math-functions)
- [C Files](#c-files)
- [C Create Files](#c-create-files)
- [C Write To Files](#c-write-to-files)
- [C Read Files](#c-read-files)
- [C Structures](#c-structures)
- [C Enums](#c-enums)
- [Advance Topic](#advence)

## C Syntax

```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

## C Output

```c
#include <stdio.h>

int main() {
    printf("This is output in C.\n");
    return 0;
}
```

## C Comments

```c
#include <stdio.h>

int main() {
    // This is a single-line comment
    /* This is a
       multi-line comment */
    printf("Hello, world!\n");
    return 0;
}
```

#### 1. Understanding Variables and Data Types

![Variables and Data Types](https://media.geeksforgeeks.org/wp-content/uploads/20220808115138/DatatypesInC.jpg)

- **Description:** This breakdown illustrates the concept of variables and different data types in C programming. It covers how to declare and initialize variables and demonstrates basic data manipulation.

## C Variables

```c
#include <stdio.h>

int main() {
    int age = 25;
    float weight = 65.5;
    char gender = 'M';
    return 0;
}
```

## C Data Types

```c
#include <stdio.h>

int main() {
    int integerVariable = 10;
    float floatVariable = 3.14;
    char charVariable = 'A';
    return 0;
}
```

## C Constants

```c
#include <stdio.h>

#define PI 3.14

int main() {
    const int MAX_VALUE = 100;
    printf("PI: %f\n", PI);
    printf("Max Value: %d\n", MAX_VALUE);
    return 0;
}
```

## C Operators

```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    return 0;
}
```

## C Booleans

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isTrue = true;
    bool isFalse = false;
    printf("isTrue: %d\n", isTrue);
    printf("isFalse: %d\n", isFalse);
    return 0;
}
```

#### 2. Control Structures: if-else Statements

![if-else Statements](https://media.geeksforgeeks.org/wp-content/uploads/20230220123250/flowchart_of_if_else_in_c.png)

- **Description:** This breakdown demonstrates the usage of if-else statements in C programming for decision-making. It explains the syntax and usage of if-else statements with examples.

## C If...Else

```c
#include <stdio.h>

int main() {
    int num = 10;
    if (num > 0) {
        printf("Positive number\n");
    } else {
        printf("Negative number\n");
    }
    return 0;
}
```

## C Switch

```c
#include <stdio.h>

int main() {
    int day = 3;
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}
```

#### 3. Loops: for and while

![for and while Loops](https://media.geeksforgeeks.org/wp-content/uploads/20220927171802/WhileloopinC2.png)

- **Description:** This breakdown covers the implementation of for and while loops in C programming for iterative tasks. It provides examples of using loops for counting, iterating over arrays, and other common scenarios.

## C While Loop

```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    return 0;
}
```

## C For Loop

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
```

## C Break/Continue

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop
        }
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", i);
    }
    return 0;
}
```

## C Arrays

```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

## C Strings

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    printf("%s\n", str);
    printf("Length: %d\n", strlen(str));
    return 0;
}
```

## C User Input

```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

## C Memory Address

```c
#include <stdio.h>

int main() {
    int num = 10;
    printf("Value: %d\n", num);
    printf("Memory Address: %p\n", &num);
    return 0;
}
```

## C Pointers

```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    printf("Value: %d\n", *ptr);
    printf("Memory Address: %p\n", ptr);
    return 0;
}
```

## C Functions

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Sum: %d\n", add(5, 3));
    return 0;
}
```

## C Function Parameters

```c


#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[] = "John";
    greet(name);
    return 0;
}
```

## C Function Declaration

```c
#include <stdio.h>

int add(int, int);

int main() {
    printf("Sum: %d\n", add(5, 3));
    return 0;
}

int add(int a, int b) {
    return a + b;
}
```

## C Recursion

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d: %d\n", num, factorial(num));
    return 0;
}
```

## C Math Functions

```c
#include <stdio.h>
#include <math.h>

int main() {
    printf("Square root of 16: %f\n", sqrt(16));
    printf("Absolute value of -5: %f\n", fabs(-5));
    printf("Power of 2^3: %f\n", pow(2, 3));
    return 0;
}
```

## C Files

```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "This is a file.\n");
    fclose(fp);
    return 0;
}
```

## C Create Files

```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("newfile.txt", "w");
    fclose(fp);
    return 0;
}
```

## C Write To Files

```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "This is a file.\n");
    fclose(fp);
    return 0;
}
```

## C Read Files

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char str[50];
    fp = fopen("file.txt", "r");
    fscanf(fp, "%s", str);
    printf("Read String: %s\n", str);
    fclose(fp);
    return 0;
}
```

## C Structures

```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 30;
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    return 0;
}
```

## C Enums

```c
#include <stdio.h>

enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Weekday today = Tuesday;
    printf("Today is %d\n", today);
    return 0;
}
```
## advence
### Structures and Unions:
**Structures** allow you to group different data types together under one name. They are useful for organizing data in a meaningful way. Example:
```c
struct Person {
    char name[50];
    int age;
    float salary;
};
```

**Unions** are similar to structures but allocate enough memory to hold the largest member. Only one member of the union can be accessed at a time. Example:
```c
union Data {
    int i;
    float f;
    char str[20];
};
```

### File Handling:
File handling in C involves operations like opening, reading, writing, and closing files. Example of writing to a file:
```c
FILE *fp;
fp = fopen("file.txt", "w");
fprintf(fp, "Hello, File World!");
fclose(fp);
```

### Dynamic Memory Allocation:
C provides functions like `malloc()`, `calloc()`, `realloc()`, and `free()` for dynamic memory allocation. Example:
```c
int *ptr;
ptr = (int *) malloc(5 * sizeof(int));
if (ptr != NULL) {
    ptr[0] = 1;
    ptr[1] = 2;
    // Use ptr
    free(ptr);
}
```

### Linked Lists:
A linked list is a linear data structure where elements are not stored at contiguous memory locations. Each element (node) contains data and a pointer to the next node. Example:
```c
struct Node {
    int data;
    struct Node *next;
};

// Example of creating nodes and linking them
struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;

head = malloc(sizeof(struct Node));
second = malloc(sizeof(struct Node));
third = malloc(sizeof(struct Node));

head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL;
```

### Stack and Queue:
**Stack** follows the Last In First Out (LIFO) principle. Example:
```c
#define MAX 100
int stack[MAX];
int top = -1;

void push(int item) {
    if (top >= MAX - 1) {
        printf("Stack Overflow");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow");
        return -1;
    }
    return stack[top--];
}
```

**Queue** follows the First In First Out (FIFO) principle. Example:
```c
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == MAX - 1) {
        printf("Queue Overflow");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = item;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow");
        return -1;
    }
    return queue[front++];
}
```

### Trees:
Trees are hierarchical data structures with a root node and child nodes. Example:
```c
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Example of creating a tree
struct TreeNode *root = NULL;
root = malloc(sizeof(struct TreeNode));
root->data = 1;
root->left = malloc(sizeof(struct TreeNode));
root->left->data = 2;
root->left->left = NULL;
root->left->right = NULL;
root->right = malloc(sizeof(struct TreeNode));
root->right->data = 3;
root->right->left = NULL;
root->right->right = NULL;
```

Certainly! Here are brief explanations and examples of more searching and sorting algorithms in C:

### Sorting Algorithms:

#### Bubble Sort:
Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
```c
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
```

#### Quick Sort:
Quick Sort is a divide-and-conquer algorithm that selects a pivot element and partitions the array around the pivot.
```c
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

#### Selection Sort:
Selection Sort repeatedly finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element.
```c
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
```

#### Insertion Sort:
Insertion Sort builds the final sorted array one item at a time by inserting each item into its correct position.
```c
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

### Searching Algorithms:

#### Binary Search:
Binary Search works on sorted arrays by repeatedly dividing the search interval in half.
```c
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        if (arr[mid] == x)
            return mid;
        
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    
    return -1;
}
```

#### Linear Search:
Linear Search sequentially checks each element of the list until a match is found or the whole list has been searched.
```c
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    
    return -1;
}
```

### Multithreading:
C supports multithreading via libraries like POSIX threads (`pthread`). Example of creating threads:
```c
#include <pthread.h>
#include <stdio.h>

void *printHello(void *threadid) {
    long tid;
    tid = (long)threadid;
    printf("Hello World! Thread ID, %ld\n", tid);
    pthread_exit(NULL);
}

int main () {
    pthread_t threads[5];
    int rc;
    long t;
    
    for (t = 0; t < 5; t++) {
        rc = pthread_create(&threads[t], NULL, printHello, (void *)t);
        if (rc) {
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            return -1;
        }
    }
    
    pthread_exit(NULL);
}
```

### Memory Management:
Involves managing memory efficiently using techniques like malloc, free, and avoiding memory leaks.



### Projects

1. [Simple ToDo List](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-01-SimpleToDoList)
2. [Rock Paper Scissors Game](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-02-Rock-Paper-Scissors-C-Game)
3. [Simple C Quiz Game](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-03-Simple_C_Quiz_Game)
4. [Guess The Number Game](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-04-GuessTheNumberGame)
5. [Modern Periodic Table](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-5-Modern_Periodic_Table)
6. [Phone Book](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-6-Phone_Book)
7. [Billing System](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-7-Billing-System)
8. [Library Management System](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-8-Library-Management-System)
9. [CountDown](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-9-CountDown)
10. [Console-based Calculator](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-10-Console_based_calculator)
11. [Calendar App](https://github.com/mdsiamulislam/What-about-C/tree/main/Project/Project-11-Calender-App)

# Problem Solutions

Welcome to the "Problem Solve" section of the repository! Here you'll find solutions to various programming problems.

## Problem Solutions

| Problem Name                        | Problem Link                                                     | File                                                                                                                                                                         |
| ----------------------------------- | ---------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| In Search of an Easy Problem        | [Problem Link](https://codeforces.com/problemset/problem/1030/A) | [1030A_In Search of an Easy Problem.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/1030A_In%20Search%20of%20an%20Easy%20Problem.c)               |
| Petya and Strings                   | [Problem Link](https://codeforces.com/problemset/problem/112/A)  | [112A_Petya and Strings.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/112A_Petya%20and%20Strings.c)                                             |
| Divisibility Problem                | [Problem Link](https://codeforces.com/problemset/problem/1328/A) | [1328A_Divisibility Problem.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/1328A_Divisibility%20Problem.c)                                       |
| Next Round                          | [Problem Link](https://codeforces.com/problemset/problem/158/A)  | [158A_Next Round.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/158A_Next%20Round.c)                                                             |
| YES or YES                          | [Problem Link](https://codeforces.com/problemset/problem/1703/A) | [1703A_YES or YES.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/1703A_YES%20or%20YES.c)                                                         |
| Sum                                 |                                                                  | [1742A_Sum.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/1742A_Sum.c)                                                                           |
| Drinks                              | [Problem Link](https://codeforces.com/problemset/problem/200/B)  | [200B_Drinks.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/200B_Drinks.c)                                                                       |
| Is your horseshoe on the other hoof | [Problem Link](https://codeforces.com/problemset/problem/228/A)  | [228A_Is your horseshoe on the other hoof.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/228A_Is%20your%20horseshoe%20on%20the%20other%20hoof.c) |
| Team                                | [Problem Link](https://codeforces.com/problemset/problem/231/A)  | [231A_Team.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/231A_Team.c)                                                                           |
| Boy or Girl                         | [Problem Link](https://codeforces.com/problemset/problem/236/A)  | [236A_Boy or Girl.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/236A_Boy%20or%20Girl.c)                                                         |
| Beautiful Matrix                    | [Problem Link](https://codeforces.com/problemset/problem/263/A)  | [263A_Beautiful Matrix.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/263A_Beautiful%20Matrix.c)                                                 |
| Stones on the Table                 | [Problem Link](https://codeforces.com/problemset/problem/266/A)  | [266A_Stones on the Table.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/266A_Stones%20on%20the%20Table.c)                                       |
| Queue at the School                 | [Problem Link](https://codeforces.com/problemset/problem/266/B)  | [266B_Queue at the School.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/266B_Queue%20at%20the%20School.c)                                       |
| Beautiful Year                      | [Problem Link](https://codeforces.com/problemset/problem/271/A)  | [271A_Beautiful Year.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/271A_Beautiful%20Year.c)                                                     |
| Word Capitalization                 | [Problem Link](https://codeforces.com/problemset/problem/281/A)  | [281A_Word Capitalization.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/281A_Word%20Capitalization.c)                                           |
| Bit++                               | [Problem Link](https://codeforces.com/problemset/problem/282/A)  | [282A_Bit++.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/282A_Bit%2B%2B.c)                                                                     |
| Helpful Maths                       | [Problem Link](https://codeforces.com/problemset/problem/339/A)  | [339A_Helpful Maths.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/339A_Helpful%20Maths.c)                                                       |
| Magnets                             | [Problem Link](https://codeforces.com/problemset/problem/344/A)  | [344A_Magnets.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/344A_Magnets.c)                                                                     |
| George and Accommodation            | [Problem Link](https://codeforces.com/problemset/problem/467/A)  | [467A_George and Accommodation.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/467A_George%20and%20Accommodation.c)                               |
| I Wanna Be the Guy                  | [Problem Link](https://codeforces.com/problemset/problem/469/A)  | [469A_I Wanna Be the Guy.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/469A_I%20Wanna%20Be%20the%20Guy.c)                                       |
| Calculating Function                | [Problem Link](https://codeforces.com/problemset/problem/486/A)  | [486A_Calculating Function.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/486A_Calculating%20Function.c)                                         |
| Watermelon                          | [Problem Link](https://codeforces.com/problemset/problem/4/A)    | [4A_Watermelon.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/4A_Watermelon.c)                                                                   |
| Domino piling                       | [Problem Link](https://codeforces.com/problemset/problem/50/A)   | [50A_Domino piling.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/50A_Domino%20piling.c)                                                         |
| Soldier and Bananas                 | [Problem Link](https://codeforces.com/problemset/problem/546/A)  | [546A_Soldier and Bananas.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/546A_Soldier%20and%20Bananas.c)                                         |
| Ultra-Fast Mathematician            | [Problem Link](https://codeforces.com/problemset/problem/61/A)   | [61A_Ultra-Fast Mathematician.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/61A_Ultra-Fast%20Mathematician.c)                                   |
| Vanya and Fence                     | [Problem Link](https://codeforces.com/problemset/problem/677/A)  | [677A_Vanya and Fence.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/677A_Vanya%20and%20Fence.c)                                                 |
| Hulk                                | [Problem Link](https://codeforces.com/problemset/problem/705/A)  | [705A_Hulk.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/705A_Hulk.c)                                                                           |
| Way Too Long Words                  | [Problem Link](https://codeforces.com/problemset/problem/71/A)   | [71A_Way Too Long Words.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/71A_Way%20Too%20Long%20Words.c)                                           |
| Anton and Danik                     | [Problem Link](https://codeforces.com/problemset/problem/734/A)  | [734A_Anton and Danik.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/734A_Anton%20and%20Danik.c)                                                 |
| Bear and Big Brother                | [Problem Link](https://codeforces.com/problemset/problem/791/A)  | [791A_Bear and Big Brother.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/791A_Bear%20and%20Big%20Brother.c)                                     |
| Hit the Lottery                     | [Problem Link](https://codeforces.com/problemset/problem/996/A)  | [996A_Hit the Lottery.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/996A_Hit%20the%20Lottery.c)                                                 |
| Chat room                           |                                                                  | [Chat room.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/Chat%20room.c)                                                                         |
| Football                            |                                                                  | [Football.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/Football.c)                                                                             |
| Gravity Flip                        |                                                                  | [Gravity Flip.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/Gravity%20Flip.c)                                                                   |
| HQ9+                                |                                                                  | [HQ9+.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/HQ9%2B.c)                                                                                   |
| Lucky Division                      |                                                                  | [Lucky Division.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/Lucky%20Division.c)                                                               |
| Lucky                               |                                                                  | [Lucky.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/Lucky.c)                                                                                   |
| String Task                         |                                                                  | [String Task.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/String%20Task.c)                                                                     |
| team                                |                                                                  | [team.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/team.c)                                                                                     |
| theatresquare                       |                                                                  | [theatresquare.c](https://github.com/mdsiamulislam/What-about-C/blob/main/Problem%20Solve/theatresquare.c)                                                                   |

Feel free to explore the solutions to these problems. Happy coding!

## Contributors

- [Md Siamul Islam Soaib](https://github.com/mdsiamulislam) - Creator and maintainer of this repository.

## License

This project is licensed under the [MIT License](LICENSE).

Thank you for exploring these C programming examples and explanations! Special thanks to ChatGPT and W3Schools for assisting in this endeavor.

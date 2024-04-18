#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the header for isdigit() function

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort function to sort an array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    char s[101];
    int numbers[101];
    int len;
    int validDigits = 0; // Count of valid digits

    scanf("%s", s);
    len = strlen(s);

    // Convert valid digits to integers and store them in the numbers array
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            numbers[validDigits++] = s[i] - '0';
        }
    }

    // Sort only the valid digits in the numbers array
    bubbleSort(numbers, validDigits);
    for (int i = 0; i < validDigits; i++) {
        printf("%d", numbers[i]);
        if (i != validDigits - 1) {
            printf("+");
        }
    }

    return 0;
}

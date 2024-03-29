#include <stdio.h>

double calculator(double num1, double num2, char operator) {
    double result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("\t\t\t\tInvalid operator.\n");
            return 0;
    }

    char response;
    printf("\t\t\t\tDo you want to continue (y/n)? ");
    scanf(" %c", &response);

    if (response == 'y' || response == 'Y') {
        printf("\t\t\t\tEnter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("\t\t\t\tEnter another number: ");
        scanf("%lf", &num2);

        return calculator(result, num2, operator);
    } else {
        return result;
    }
}

int main() {

    printf("\n\n\---------------------------->> Welcome to Console Base Calculetor <<----------------------------\n\n");

    double num1, num2;
    char operator;

    printf("\t\t\t\tEnter a number: ");
    scanf("%lf", &num1);

    printf("\t\t\t\tEnter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("\t\t\t\tEnter another number: ");
    scanf("%lf", &num2);

    double result = calculator(num1, num2, operator);

    if (result != 0) {
        printf("\n\n\t\t\t\tResult is %.2lf\n", result);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    int randomNum = rand();

    char randomNumString[100];
    sprintf(randomNumString, "%d", randomNum);
    int length = strlen(randomNumString);

    printf("\n\n\n\n\n\t\t\t\t\t-----> Welcome to Number Guessing Game <-----\n\n\n\n\n\t\t\t\t\t");
    int a, b;

    a = pow(10, length);
    int result = 0;
    for (int i = 0; i < length + 1; i++)
    {
        result = result * 10 + 9;
    }
    b = result;
    int i, number = randomNum;
    printf("Enter a number %d to %d : ", a, b);

    while (i < 1)
    {
        int x;
        scanf("%d", &x);
        if (x < number)
        {
            printf("\t\t\t\t\tYour Number is small. Try Again : ");
            i = 0;
        }
        else if (x > number)
        {
            printf("\t\t\t\t\tYour Number is Big. Try Again : ");
            i = 0;
        }
        else
        {
            printf("\n\n\n\n\n\t\t\t\t\t-----> Congratulation You Win <-----\n\n\n\n\n\t\t\t\t\t");
            i = 2;
        }
    }
}

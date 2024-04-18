#include <stdio.h>

// Function to calculate the day of the week for January 1st of a given year (logic from https://cs.uwaterloo.ca/~alopez-o/math-faq/node73.html)
int getFirstDayOfYear(int year)
{
    int day = (year * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return day;
}


// Main function
int main()
{
    // Arrays to store the names of the months and the number of days in each month
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int space = 0, weekend = 0;

    // Get the year from the user
    printf("Enter the year: ");
    int year;
    scanf("%d", &year);

    // Clear the screen
    system("cls");

    printf("Welcome to the year %d\n", year);

    // Check if the year is a leap year (logic from https://www.programiz.com/c-programming/examples/leap-year)
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days[1] = 29; // Leap year, so February has 29 days
    }

    // Get the day of the week for January 1st of the given year
    weekend = getFirstDayOfYear(year);

    // Print the calendar for each month
    for (int i = 0; i < 12; i++)
    {
        printf("\n\n\n -------------------- %s -------------------- \n", month[i]);
        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");

        // Print the spaces for the first day of the month
        for (space = 0; space < weekend; space++)
        {
            printf("\t");
        }

        // Print the days of the month
        for (int j = 1; j <= days[i]; j++)
        {
            printf("%d\t", j);
            weekend++;
            if (weekend % 7 == 0)
            {
                weekend = 0;
                printf("\n");
            }
        }
    }

    return 0;
}

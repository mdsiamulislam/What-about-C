# Calendar Generator

## Overview
This C program generates a calendar for a specified year. It takes into account leap years and displays each month's days along with the correct day of the week for the first day of each month.

## Usage
1. Compile the program using a C compiler (e.g., GCC):
   ```
   gcc calendar.c -o calendar
   ```

2. Run the program:
   ```
   ./calendar
   ```

3. Enter the year for which you want to generate the calendar.

4. The program will display a calendar for the specified year, showing each month with days and day-of-week headers.

## Example
```
Enter the year: 2023
Welcome to the year 2023

 -------------------- January --------------------

Sun     Mon     Tue     Wed     Thu     Fri     Sat
                        1       2       3       4
5       6       7       8       9       10      11
12      13      14      15      16      17      18
19      20      21      22      23      24      25
26      27      28      29      30      31

...

 -------------------- December --------------------

Sun     Mon     Tue     Wed     Thu     Fri     Sat
                                1       2       3
4       5       6       7       8       9       10
11      12      13      14      15      16      17
18      19      20      21      22      23      24
25      26      27      28      29      30      31
```

## Notes
- The program uses Zeller's Congruence formula to determine the day of the week for January 1st of the specified year.
- Leap years (where February has 29 days) are correctly accounted for.
- The program clears the screen using the "system" function, which may not work on all systems.
- Input validation for the year is not implemented in this sample code.

Feel free to customize and improve this program as needed for your use case.

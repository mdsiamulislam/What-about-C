#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to clear the screen based on the platform
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    FILE *filePointer;
    char buffer[1000];

    printf("\n\t\t\t\t------> Do it: TODO <------\t\t\t\t\n\n");
    printf("\t\t\t\tEnter 'N' to add a new task\n");
    printf("\t\t\t\tEnter 'S' to show all tasks\n\n");

    char nav;
    printf("\t\t\t\t");
    scanf("%c", &nav);

    switch (nav)
    {
    case 'N':
        filePointer = fopen("todo.txt", "a");
        if (filePointer == NULL)
        {
            printf("File could not be opened for writing.\n");
            return 1;
        }

        printf("\t\t\t\tWrite Your Task: ");
        char task[1000];
        scanf(" %[^\n]", task);
        fprintf(filePointer, "%s\n", task);
        fclose(filePointer);
        break;
    case 'S':

        filePointer = fopen("todo.txt", "r");
        if (filePointer == NULL)
        {
            printf("File could not be opened for reading.\n");
            return 1;
        }
        // Clear the screen
        clearScreen();

        printf("\n\t\t\t\t------> Your Tasks Are <------\t\t\t\t\n\n");

        // Read and print the file content
        while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
        {
            printf("\t\t\t\t%s", buffer);
        }
        fclose(filePointer);
        break;
    default:
        printf("Invalid option. Please enter 'N' or 'S'.\n");
    }

    return 0;
}
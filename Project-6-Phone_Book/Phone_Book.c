#include<stdio.h>
int main(){
     FILE *filePointer;
    char buffer[1000];

    printf("Welcome to Phone Book\n");

    printf(">> 1. Add a new contact\n");
    printf(">> 2.Show all contacts\n");

    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    system("cls");
        filePointer = fopen("phonebook.txt", "a");
        if (filePointer == NULL) {
            printf("File could not be opened for writing.\n");
            return 1;
        }
        printf("Adding a new contact\n");
        char name[20];
        char phone[20];
        printf("Enter name: ");
        scanf(" %[^\n]", name);
        printf("Enter phone: ");
        scanf(" %[^\n]", phone);
        fprintf(filePointer, "%s\n", name);
        fprintf(filePointer, "%s\n", phone);
        fprintf(filePointer, "\n");
        fclose(filePointer);

        printf("\nContact added successfully\n");
        printf(">> 1.Return to main menu : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            system("cls");
            main();
        }else{
            printf("\nInvalid choice\n");
            printf("Restarting the program\n");
        }
        
        

        break;
    case 2:
    system("cls");
    printf("Showing all contacts\n\n\n");
        filePointer = fopen("phonebook.txt", "r");
        if (filePointer == NULL) {
            printf("File could not be opened for reading.\n");
            return 1;
        }


        while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
            printf("%s", buffer);
        }
        fclose(filePointer);
        break;

    default:
        break;
    }

}

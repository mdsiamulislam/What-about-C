#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
char buffer[1000];

// Verification Functions.Its called when the program starts.
void password()
{
    int password = 2023;

    printf("Password Protected \n");
    printf("-----------------------------------\n");
    printf("Enter your password to login: ");

    int inputpass;
    scanf("%d", &inputpass);

    if (password == inputpass)
    {
        printf("\n>>> Password Matched <<< \n");
        printf("Redirecting to Main Menu... \n");
        Sleep(2000);
        system("cls");
        menu();
    }
    else
    {
        printf("\n>>> Invaild Password <<< \n");
        printf("Redirecting to Main Menu... \n");
        Sleep(2000);
        system("cls");
        main();
    }
}

// If verification is successfull then the program will be redirected to the main menu.
void menu()
{

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    printf(">> 1. Manage Your Library member Panel \n");
    printf(">> 2. Manage Your Library Book Panel \n");
    printf(">> 3. Close The Program \n\n");
    printf("> Nav: ");
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        memberPanel();
        break;
    case 2:
        bookPanel();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Invalid choice! \n");
        printf("---------------------------------------------------------\n\n");
        Sleep(2000);
        menu();
    }
}

// On menu function there are two options.1. member Panel 2. Book Panel
void memberPanel()
{

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> member Control Panel <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    printf(">> 1. Add New Member \n");
    printf(">> 2. List Of All Member \n");
    printf(">> 3. Back To Main Menu \n");

    printf("> Nav : ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addmember();
        break;
    case 2:
        listmember();
        break;
    case 3:
        menu();
        break;
    default:
        printf("Invaild Input!");
        Sleep(2000);
        memberPanel();
    }
}
void bookPanel()
{

    system("cls");

    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> Book Control Panel <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");
    printf(">> 1. Add A New Book \n");
    printf(">> 2. List of All Books \n");
    printf(">> 3. Open Main Menu \n");

    printf("\n> Nav : ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addBook();
        break;
    case 2:
        listBook();
        break;
    case 3:
        menu();
        break;
    default:
        printf("Invaild Input!");
        Sleep(2000);
        bookPanel();
    }
}

// member Operation Functions
void addmember()
{

startingpoint1:

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> member Control Panel <<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>    Add New member   <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    char name[255];
    char gender;
    long long int phone;
    int studentid;

    FILE *filePointer = fopen("member_Records.txt", "ab+");

    if (filePointer != NULL)
    {
        printf("Enter name: ");
        scanf(" %[^\n]", &name);

        while (getchar() != '\n')
            ;
        printf("Enter Gender [M/F]: ");
        scanf(" %c", &gender);

        printf("Enter phone [10 digits,Don't Requard +880/country code]: ");
        scanf("%lld", &phone);

        printf("Enter Student ID: ");
        scanf("%d", &studentid);

        fprintf(filePointer, "%s \n%c \n%lld \n%d \n\n", name, gender, phone, studentid);
        fclose(filePointer);

        printf("\n>>> Member Added Successfully <<< \n");
    }
    else
    {
        printf("Unable to Open/Create the file.");
    }
    printf("\n");
    printf("Are your want to add another member? [y/N]: ");
    char input;
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y')
    {
        goto startingpoint1;
    }
    else if (input == 'n' || input == 'N')
    {
        printf("\nRedirecting to member Panel.");
        Sleep(2000);
        memberPanel();
    }
    else
    {
        printf("\nInvaild input. Redirecting to member Panel.");
        Sleep(2000);
        memberPanel();
    }
}
void listmember()
{

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> member Control Panel <<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>  List Of All member <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    FILE *filePointer = fopen("member_Records.txt", "r");

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(filePointer);

    printf("\nPress any key to  back\n");
    getch();
    memberPanel();
}

// Book Operation Functions
void addBook()
{

startag:

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> member Control Panel <<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>    Add A New Book    <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    char name[255], author[255], publisher[255];
    double bookid, quantity;

    FILE *filePointer = fopen("book_Records.txt", "ab+");

    if (filePointer != NULL)
    {
        
        while (getchar() != '\n');
        printf("Enter Book Name: ");
        scanf("%[^\n]", &name);

        while (getchar() != '\n');
        printf("Enter Book Author: ");
        scanf("%[^\n]", &author);

        while (getchar() != '\n');
        printf("Enter Book Publisher: ");
        scanf("%[^\n]", &publisher);

        printf("Enter Book ID: ");
        scanf("%lf", &bookid);

        printf("Enter Book Quantity: ");
        scanf("%lf", &quantity);

        fprintf(filePointer, "%s \n%s \n%s \n%.0lf \n%.0lf \n\n", name, author, publisher, bookid, quantity);
        fclose(filePointer);

        printf("\n>>> Book Added Successfully <<< \n");
    }
    else
    {
        printf("Unable to open/locate the file.");
    }


    printf("\nDo you wanna add more [y/N]: ");
    char input;
    scanf("%s", &input);

    if (input == 'y' || input == 'Y')
    {
        addBook();
    }
    else if (input == 'n' || input == 'N')
    {
        printf("\nRedirecting to Book Panel.");
        Sleep(2000);
        bookPanel();
    }
    else
    {
        printf("\nInvaild input. Redirecting to Book Panel.");
        Sleep(2000);
        bookPanel();
    }
}
void listBook()
{

    system("cls");
    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>> member Control Panel <<<<<<<<<<<<<<<<<\n");
    printf(">>>>>>>>>>>>>>>>>>   List of All Books  <<<<<<<<<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    char name[255], author[255], publisher[255];
    double quantity, bookid;
    int counter = 0;

    FILE *filePointer = fopen("book_Records.txt", "r");

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(filePointer);

    if (counter == 0)
    {
        printf("There is no book...\n");
    }

    printf("Press any key to get back \n");
    getch();
    bookPanel();
}

// Main Function
void main()
{

    printf("*********************************************************\n");
    printf(">>>>>>>>>> Welcome To Library Managment System <<<<<<<<<<\n");
    printf("---------------------------------------------------------\n\n");

    password();
}

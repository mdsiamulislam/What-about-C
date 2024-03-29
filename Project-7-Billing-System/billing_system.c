#include <stdio.h>
#include <string.h> // Include this for strcmp function
FILE *filePointer;
char buffer[1000];
int bill()
{
    char name[20];
    char phone[12]; // Increased the size to handle phone numbers with leading zeros
    char address[50];
    char product[100][100]; // 2D array to store product names
    int quantity[100];
    int price[100];
    int total = 0;
    int numProducts = 0; // Track the number of products entered

    printf("Enter your name: ");
    scanf(" %[^\n]%*c", name);

    printf("Enter your phone number: ");
    scanf(" %[^\n]%*c", phone);

    printf("Enter your address: ");
    scanf(" %[^\n]%*c", address);

    for (int i = 0; i < 100; i++)
    {
        printf("Enter product name (or type 'exit' to finish): ");
        scanf(" %[^\n]%*c", product[i]);
        if (strcmp(product[i], "exit") == 0)
        {
            break; // Exit the loop if "exit" is entered
        }
        printf("Enter quantity: ");
        scanf("%d", &quantity[i]);

        printf("Enter price: ");
        scanf("%d", &price[i]);
        numProducts++; // Increment the count of products
    }

    system("clear"); // Clear the screen
    system("cls");

    filePointer = fopen("bill.txt", "a");
    if (filePointer == NULL)
    {
        printf("File could not be opened for writing.\n");
        return 1;
    }

    printf("Successfully generated bill\n\n\n");
    printf("Name: %s\n", name);
    printf("Phone: %s\n", phone);
    printf("Address: %s\n\n", address);

    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Phone: %s\n", phone);
    fprintf(filePointer, "Address: %s\n\n", address);

    printf("Products list:\n");
    for (int i = 0; i < numProducts; i++)
    {
        printf("Product: %s\n", product[i]);
        printf("Quantity: %d\n", quantity[i]);
        printf("Price: %d\n", price[i]);

        fprintf(filePointer, "Product: %s\n", product[i]);
        fprintf(filePointer, "Quantity: %d\n", quantity[i]);
        fprintf(filePointer, "Price: %d\n", price[i]);

        total += quantity[i] * price[i];
    }
    printf("\nTotal: %d\n", total);
    fprintf(filePointer, "\nTotal: %d\n\n\n\n\n", total);
    fclose(filePointer);

    printf(">> Return to main menu? (y/n): ");
    char choice;
    scanf(" %c", &choice);

    if (choice == 'y')
    {
        system("clear"); // Clear the screen
        system("cls");
        main();
    }
    else
    {
        printf(">> Exiting...\n");
        system("exit");
    }
}

int main()
{

    char product[100][100] = {
        "Tomato", "Potato", "Onion", "Carrot", "Cucumber", "Lettuce",
        "Apple", "Banana", "Orange", "Grapes", "Strawberries", "Blueberries",
        "Chicken", "Beef", "Pork", "Fish", "Shrimp", "Salmon",
        "Bread", "Rice", "Pasta", "Milk", "Eggs", "Butter",
        "Water", "Soda", "Juice", "Tea", "Coffee", "Beer",
        "Toothpaste", "Shampoo", "Soap", "Toilet Paper", "Towel", "Detergent",
        "Shoes", "Shirt", "Pants", "Socks", "Hat", "Jacket",
        "Computer", "Phone", "Tablet", "Headphones", "Printer", "Router",
        "Guitar", "Piano", "Violin", "Drums", "Flute", "Trumpet",
        "Book", "Magazine", "Newspaper", "Notebook", "Pen", "Pencil",
        "Chair", "Table", "Couch", "Lamp", "Desk", "Mirror",
        "Spoon", "Fork", "Knife", "Plate", "Bowl", "Glass",
        "Basketball", "Football", "Soccer Ball", "Tennis Racket", "Golf Clubs", "Swimming Goggles",
        "Backpack", "Handbag", "Wallet", "Watch", "Sunglasses", "Umbrella",
        "Car", "Bicycle", "Motorcycle", "Bus", "Train", "Airplane",
        "House", "Apartment", "Cabin", "Mansion", "Condo", "Cottage"};
    int quantity[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 50, 60, 70, 80, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 50, 60, 70, 80, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 50, 60, 70, 80, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 50, 60, 70, 80, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 50, 60, 70, 80};
    int price[100] = {160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 80, 70, 60, 50, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 80, 70, 60, 50, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 80, 70, 60, 50, 160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    printf("Welcome to the billing system\n\n\n");
    printf(">> 1. Make a bill\n");
    printf(">> 2. Items list\n");
    printf(">> 3. History\n");
    printf(">> 4. Exit\n");

    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf(">> 1. Make a bill\n");
        bill();
        break;

    case 2:
        system("cls"); // Clear the screen
        printf(">> 2. Items list\n\n");
        for (int i = 0; i < 100; i++)
        {
            printf("%d. %s\n", i + 1, product[i]);
            printf("Quantity: %d\n", quantity[i]);
            printf("Price: %d\n", price[i]);
            printf("\n");
        }
        printf(">> Return to main menu? (y/n): ");
        char choice;
        scanf(" %c", &choice);

        if (choice == 'y')
        {
            system("clear"); // Clear the screen
            system("cls");
            main();
        }
        else
        {
            printf(">> Exiting...\n");
            system("exit");
        }
        break;

    case 3:
        system("cls"); // Clear the screen
        printf(">> 3. History\n\n\n");

        filePointer = fopen("bill.txt", "r");
        if (filePointer == NULL)
        {
            printf("File could not be opened for reading.\n");
            return 1;
        }
        while (fgets(buffer, sizeof(buffer), filePointer) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(filePointer);

        printf("\n\n>> Return to main menu? (y/n): ");
        char choices;
        scanf(" %c", &choices);

        if (choices == 'y')
        {
            system("clear"); // Clear the screen
            system("cls");
            main();
        }
        else
        {
            printf(">> Exiting...\n");
            system("exit");
        }

        break;

    case 4:
        printf(">> 4. Exit\n");
        system("exit");
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
}

# Simple Billing System

This is a basic billing system implemented in C, allowing users to generate bills, list items, view history, and exit. The program stores bill details in a text file named "bill.txt" and includes a predefined list of products.

## Features

- **Generate Bill**: Enter customer details, select products, and calculate the total cost of items.
- **List Items**: View a predefined list of products along with their quantities and prices.
- **View History**: Access billing history stored in the "bill.txt" file.
- **Exit**: Close the program.

## Usage

1. Compile the program using a C compiler (e.g., GCC):

   ```shell
   gcc billing_system.c -o billing_system
   ```

2. Run the program:

   ```shell
   ./billing_system
   ```

3. Choose from the available options in the menu:

   - Option 1: Generate a bill by entering customer details and selecting products.
   - Option 2: List predefined items along with quantities and prices.
   - Option 3: View billing history stored in "bill.txt."
   - Option 4: Exit the program.

## Sample Data

- Product data, including names, quantities, and prices, is predefined in the program.
- Customer data and bill details will be entered during the bill generation process.

## File Handling

- Bill details are saved to a file named "bill.txt" for later reference.
- The program reads and displays billing history from this file.

## Note

- The program uses platform-specific screen-clearing commands (e.g., `system("clear")` and `system("cls")`) to clear the terminal screen, which may vary depending on your operating system.
- Ensure that the "bill.txt" file is present and accessible for storing and retrieving billing history.

Feel free to explore and modify the code as needed for your specific requirements.

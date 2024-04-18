package console_based_calculator;
import java.util.Scanner;

public class ConsoleBasedCalculatore {

    public static void main(String[] args) {
        System.out.println("-----> Welcome to the Console Based Calculator ----->");
        System.out.println("-----> Developed by: Md Siamul Islam Soaib ----->");

        double num1, num2, result = 0.0;
        char operator;

        Scanner input = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        num1 = input.nextDouble();

        System.out.println("Enter the second number: ");
        num2 = input.nextDouble();

        System.out.println("Enter the operator: ");
        operator = input.next().charAt(0);

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
                    System.out.println("Division by zero is not possible!");
                    return; // Exit the program gracefully
                }
                break;

            default:
                System.out.println("Invalid operator!");
                break;
        }

        System.out.println("The result is: " + result);
    }
    
}
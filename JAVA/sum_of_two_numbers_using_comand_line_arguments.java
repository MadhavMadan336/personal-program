import java.util.Scanner; // Importing the Scanner class for user input

public class sum_of_two_numbers_using_comand_line_arguments {
    public static void main(String[] args) {
        int a, b, sum; // Declare integer variables a, b, and sum

        Scanner sc = new Scanner(System.in); // Create a Scanner object for user input

        System.out.println("Enter first number::>>"); // Prompt the user to enter the first number
        a = sc.nextInt(); // Read the first number from the user

        System.out.println("Enter second number::>>"); // Prompt the user to enter the second number
        b = sc.nextInt(); // Read the second number from the user

        sum = a + b; // Calculate the sum of the two numbers

        System.out.println("The Sum = " + sum); // Display the result
    }
}

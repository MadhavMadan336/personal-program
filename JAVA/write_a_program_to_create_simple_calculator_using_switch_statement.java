import java.util.Scanner;
public class to_create_simple_calculator_using_switch_statement {
    public static void main(String[] args) {
        int a, b, ch; // Declare integer variables a, b, and sum

        Scanner Sc =new Scanner(System.in); // Create a Scanner object for user input

        System.out.println("Enter first number::>>"); // Prompt the user to enter the first number
        a = Sc.nextInt(); // Read the first number from the user

        System.out.println("Enter second number::>>"); // Prompt the user to enter the second number
        b = Sc.nextInt(); // Read the second number from the user
        System.out.println(" Enter your choice 1->ADD 2->SUBTRACT 3->MULTIPLY 4->DIVIDE \n Enter your choice::");
        ch=Sc.nextInt();
        switch(ch){
            case 1:
            System.out.println("Addition="+(a+b));
            break;
            case 2:
            System.out.println("Subtraction="+(a-b));
            break;
            case 3:
            System.out.println("Multiplacation="+(a*b));
            break;
            case 4:
            System.out.println("Division="+(a/b));
            break;
            default:
            System.out.println("Invalid Choice");
            break;
        }
    }
}

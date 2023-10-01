import java.util.Scanner; // Importing the Scanner class for user input
public class to_find_area_of_a_rectangle {
    public static void main(String[] args) {
        int l, b, area,peri; // Declare integer variables a, b, and sum
        Scanner Sc =new Scanner(System.in); // Create a Scanner object for user input
        System.out.println("Enter first number::>>"); // Prompt the user to enter the first number
        l = Sc.nextInt(); // Read the first number from the user

        System.out.println("Enter second number::>>"); // Prompt the user to enter the second number
        b = Sc.nextInt(); // Read the second number from the user
        area=l*b;//Area of rectangle
        System.out.println("The area of the rectangle = " + area); // Display the result
        peri=2*(l+b);//perimeter of rectangle
        System.out.println("The perimeter of the rectangle = " + peri);
    }

}

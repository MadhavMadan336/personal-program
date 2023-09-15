import java.util.Scanner;

public class to_check_positive_negative_or_zero {
    public static void main(String[] args)
    {
    int a;
    Scanner sc=new Scanner (System.in);
    System.out.println("Enter the  Number which you want to check::>");
    a=sc.nextInt();
    if(a>0)
    System.out.println("Positive Number");
    else if(a<0)
    System.out.println("Negative Number");
    else
    System.out.println("zero Number");
    }
    
}

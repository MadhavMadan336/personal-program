
import java.util.Scanner;
public class even_odd {
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int a;
    System.out.println("Enter the  Number which you want to check::>");
    a=sc.nextInt();
    if(a%2==0)
    {
        System.out.println("Even Number");
    }
    else
    {
        System.out.println("Odd Number.");
    }
}
}


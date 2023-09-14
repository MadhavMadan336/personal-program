
import java.util.Scanner;
public class to_check_an_age_is_able_to_voting_or_not {
    public static void main(String[] args){
    int a;
    Scanner sc=new Scanner (System.in);
    System.out.println("Enter the  Number which you want to check::>");
    a=sc.nextInt();
    if(a>=18)
    {
        System.out.println("Eligible for voting");
    }
    else
    {
        System.out.println("Not Eligible for voting");
    }
}
}


import java.util.Scanner;
public class middle_number_in_a_group_of_three {

    public static void main(String[] args) {
        int a,b,c;
        Scanner sc=new Scanner (System.in);
        System.out.println("first Number::>");
        a=sc.nextInt();
        System.out.println("second Number::>");
        b=sc.nextInt();
        System.out.println("Third Number::>");
        c=sc.nextInt();
        if(a>b && a<c||a<b && a>c){
        System.out.println("The middle Number is="+a);
        }
        else if(b>a && b<c||b<a && b>c){
        System.out.println("The middle Number is="+b);
        }
        else{
        System.out.println("The middle Number is="+c);
        }
    }
}

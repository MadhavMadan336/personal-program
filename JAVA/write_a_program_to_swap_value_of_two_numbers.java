import java.util.Scanner;
class write_a_program_to_swap_value_of_two_numbers
{
    public static void main(String[] args) {
        int a,b,c;
        Scanner sc=new Scanner (System.in);
        System.out.println("first Number::>");
        a=sc.nextInt();
        System.out.println("second Number::>");
        b=sc.nextInt();
        c=a;
        a=b;
        b=c;
        System.out.println("after swaping a="+a);
        System.out.println("after swaping b="+b);
    }
}

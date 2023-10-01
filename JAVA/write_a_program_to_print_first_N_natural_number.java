import java.util.Scanner;
public class write_a_program_to_print_first_N_natural_number {
    public static void main(String[]args){
        Scanner Sc=new Scanner(System.in);
        int n,i=1;
        System.out.println("Enter the number::>>");
        n=Sc.nextInt();
        while (i <= n) {
            if (i == 1) {
              System.out.print(i);
            } else {
              System.out.print(", " + i);
            }
            i++;
        }
    }
}


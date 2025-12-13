//Write a Java program to get a number from the user and print whether it is positive or negative
import java.util.Scanner;
public class Test{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the Number>>");
        int num=sc.nextInt();

        if(num>0){
            System.out.println("Positive Number"+num);
        }
        else if(num<0){
            System.out.println("Negative Number"+num);
        }
        else{
            System.out.println("Number is zero"+num);
        }

        //int greater=(num1>num2)?num1:num2;
        sc.close();
    }
}


//Finish the following code so that it prints You have a fever if your temperature is above 100 and otherwise prints You don't have a fever.
//import java.util.Scanner;
public class Test2 {
    public static void main(String[] args) {
       // Scanner sc=new Scanner(System.in);
        double temp=103.5;
        if(temp>100){
            System.out.println("I have a feaver");
        }
        else{
            System.out.println("I have not feaver");
        }

    }
}



//Write a Java program to input week number(1-7) and print day of week name using switch case
import java.util.Scanner;
public class test3{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of weak");
        int num=sc.nextInt();
        switch (num){
            case 1:
                System.out.println("sunday");
                break;
            case 2:
                System.out.println("Monday");
                break;
            case 3:
                System.out.println("Tuseday");
                break;
            case 4:
                System.out.println("Wednessday");
                break;
            case 5:
                System.out.println("Thursday");
                break;
            case 6:
                System.out.println("Friday");
                break;
            case 7:
                System.out.println("satuday");
                break;
            default:
                System.out.println("Not Valid Number");
                break;
        }

        
    }
}



//:What will be the value of x & y in thefollowing program:
public class Solution {
public static void main(String args[]) {
int a = 63, b = 36;
boolean x = (a < b ) ? true : false;
int y= (a > b ) ? a : b;
}

//answer--> false next return a so 63




//Write a Java program that takes a year from the user and print whether that year is a leap year or not.
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the year >>");
        int year = sc.nextInt();

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println("Leap Year");
        } else {
            System.out.println("Not a Leap Year");
        }

        sc.close();
    }
}




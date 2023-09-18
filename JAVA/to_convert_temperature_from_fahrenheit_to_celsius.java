import java.util.*;
public class to_convert_temperature_from_fahrenheit_to_celsius {
    public static void main(String [] args){
        Scanner Sc=new Scanner(System.in);
        float c,f;
        System.out.println(" enter temperature in celcius::");
        c=Sc.nextFloat();
        f=(c*9/5)+32;
        System.out.println(" Temperature in fahrenheit="+f);
    }
    
}

#include <stdio.h>  
int main()  
{  
    int num1, num2, lcm, flag = 1;    
    printf( " Enter any two positive numbers to get the LCM \n ");  
    scanf(" %d %d", &num1, &num2); 
    lcm = (num1 > num2) ? num1 : num2;  
       while(flag=1)
       {
        if(lcm% num1==0 && lcm%num2==0)  
        {  
            printf( " The LCM of %d and %d is %d. ", num1, num2,lcm);   
            break;
        } 
        ++lcm;
       }
    return 0;
}

a=int(input("Enter number upto which you want to print::::>>"))
sum=0
while(a>0):
    sum=sum+((a%10)*(a%10))
    a=a//10
print("sum of square of digits =",sum)    

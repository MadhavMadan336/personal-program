a=int(input("Enter number to check for armstrong::::>>"))
orig=a
sum=0
while(a>0):
    sum=sum+((a%10)*(a%10)*(a%10))
    a=a//10
if orig==sum:
    print("Number is Armstrong")
else:
    print("Number is not Armstrong")    

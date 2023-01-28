a=int(input("Enter number upto which you want to print::::>>"))
pro=1
while(a>0):
    pro=pro*(a%10)
    a=a//10
print("product of digits=",pro)    

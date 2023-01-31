a= int(input("Enter the first number:  "))
b= int(input("Enter the second number: "))
c= int(input("Enter the third number:  "))
if(a>b and a<c)or(a<b and a>c):
    print("Middle Number a=",a)
elif(b>a and b<c)or(b<a and b>c):
    print("Middle Number b=",b)
else:
    print("Middle Number c=",c)    

def reverse():
    a=int(input("enter the number:::: "))
    rev=0
    while(a>0):
        rev=(rev*10)+a%10
        a=a//10
    return(rev)
    
c=reverse()
print("reverse=",c)    

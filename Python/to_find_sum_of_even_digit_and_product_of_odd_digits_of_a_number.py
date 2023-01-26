a=int(input("enter the number:::: "))
sum=0
pro=1
while(a>0):
    d=a%10
    if(d%2==0):
        sum=sum+d
    else:
        pro=pro*d
    a=a//10
print("sum of even digits=",sum,"product of odd digits=",pro)            

#variable length argument
def addn(a1,*a2):
    sum=a1
    for i in a2:
        sum+=i
    print("sum=",sum)
addn(1,2,3,5,6)        

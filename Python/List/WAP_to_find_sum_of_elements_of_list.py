a=[]
size=int(input("How many element you want to enter"))
for i in range(size):
    val=int(input("enter number"))
    a.append(val)
sum=0
for i in range(size):
    sum=sum+a[i]
print("sum of list Elements=",sum)

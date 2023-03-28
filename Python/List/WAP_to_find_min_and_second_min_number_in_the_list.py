a=[]
size=int(input("Enter size of the list::"))
for i in range(size):
    val=int(input("enter number"))
    a.append(val)
a.sort()
print("Min number=",a[0])
print("Second Min number=",a[1])

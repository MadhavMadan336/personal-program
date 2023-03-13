a=[]
for i in range(5):
    x=input("enter value:>>")
    a.append(x)
print("Original list is::",a)
index=int(input("Enter Index where you want to insert"))
value=input("Enter value to insert::")
a.insert(index,value)
print("List after Insertion::",a)

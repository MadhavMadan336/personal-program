a=[]
for i in range(5):
    x=input("enter value:>>")
    a.append(x)
print("Original list is::",a)
value=input("Enter value to insert::")
a.remove(value)
print("List after Deletion::",a)

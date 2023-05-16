import numpy as np
a=[]
size= int (input("How many Numbers?"))
for i in range(size):
  val=int(input("Enter Number"))
  a.append(val)
arr=np.array(a)
for i in range(arr.size):
  print(arr[i])
arr1=arr[2:4]
print(arr1)

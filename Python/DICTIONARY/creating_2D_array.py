import numpy as np
matrix=[]
row=int(input("enter number of row::"))
col=int(input("enter number of column::"))
for i in range (row):
    a=[]
    for j in range (col):
        val=int(input("enter number:::"))
        a.append(val)
        matrix.append(a)
        for i in range(row):
            for j in range(col):
                print(a[i][j],end="")
                print()

import timeit
listtime=timeit.timeit(stmt="[1,2,3,4,5,6,7,8,9]",number=1000000)
tupletime=timeit.timeit(stmt="(1,2,3,4,5,6,7,8,9)",number=1000000)
print("list takes time:",listtime)
print("tuple takes time:",tupletime)

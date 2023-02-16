#id function
b=[1,2,3]
def modify():
    b=[4,5,6]
    print(id(b))
    print(id(b))
modify()
    

def bitwise_and(x, y):
    return x & y
def bitwise_or(x, y):
    return x | y
def bitwise_xor(x, y):
    return x ^ y
print("x\ty\tx & y\tx | y\tx ^ y")
print("-"*30)
for x in range(2):
    for y in range(2):
        bit_and = bitwise_and(x, y)
        bit_or = bitwise_or(x, y)
        bit_xor = bitwise_xor(x, y)

        print(f"{x}\t{y}\t{bit_and}\t{bit_or}\t{bit_xor}")
        

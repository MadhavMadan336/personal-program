def polynomial_function(x, coefficients):
    result = 0
    for i, coeff in enumerate(coefficients):
        result += coeff * x**i
    return result

coefficients = [2, -3, 1]  # 2x^2 - 3x + 1
x_value = 2
print(polynomial_function(x_value, coefficients))  # Output: 3

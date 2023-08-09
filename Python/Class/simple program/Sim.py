# Creating a dictionary with some key-value pairs
student_scores = {
    'Alice': 85,
    'Bob': 92,
    'Charlie': 78,
    'David': 95,
    'Eve': 88
}

# Creating an array of student names
student_names = ['Alice', 'Bob', 'Charlie', 'David', 'Eve']

# Accessing values from the dictionary
print("Bob's score:", student_scores['Bob'])

# Looping through the array and using it to access values from the dictionary
for name in student_names:
    score = student_scores.get(name, "Score not available")
    print(f"{name}'s score: {score}")

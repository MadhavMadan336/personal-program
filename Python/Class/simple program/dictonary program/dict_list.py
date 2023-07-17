# Creating a list of dictionaries
students = [
    {"name": "Alice", "age": 20, "major": "Computer Science"},
    {"name": "Bob", "age": 21, "major": "Mathematics"},
    {"name": "Charlie", "age": 19, "major": "Physics"}
]

# Accessing and modifying elements in the list of dictionaries
print(students[0]["name"])  # Output: "Alice"
print(students[1]["age"])   # Output: 21

students[2]["major"] = "Biology"

# Adding a new entry to the list
new_student = {"name": "David", "age": 22, "major": "Chemistry"}
students.append(new_student)

# Iterating through the list of dictionaries
for student in students:
    print(f"{student['name']} is {student['age']} years old, majoring in {student['major']}.")

# Output:
# Alice is 20 years old, majoring in Computer Science.
# Bob is 21 years old, majoring in Mathematics.
# Charlie is 19 years old, majoring in Biology.  # Major has been modified.
# David is 22 years old, majoring in Chemistry. # New student added.

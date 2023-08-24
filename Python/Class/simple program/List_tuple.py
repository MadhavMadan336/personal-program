# Creating a list of tuples
student_scores = [("Alice", 95), ("Bob", 82), ("Charlie", 78), ("David", 90)]

# Accessing elements in the list of tuples
for name, score in student_scores:
    print(f"{name} scored {score}.")

# Sorting the list of tuples based on the second element (scores)
sorted_scores = sorted(student_scores, key=lambda x: x[1], reverse=True)

print("\nSorted scores:")
for name, score in sorted_scores:
    print(f"{name}: {score}")

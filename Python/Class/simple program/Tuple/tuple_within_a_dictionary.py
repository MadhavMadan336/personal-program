# Define a dictionary with tuples as values
student_scores = {
    'Alice': (95, 87, 91),
    'Bob': (76, 88, 79),
    'Charlie': (82, 90, 86),
    'Dave': (92, 85, 88)
}

# Iterate over the dictionary items
for name, scores in student_scores.items():
    # Calculate the average score
    average_score = sum(scores) / len(scores)
    
    # Print the student name and average score
    print(f"{name}: Average score = {average_score:.2f}")

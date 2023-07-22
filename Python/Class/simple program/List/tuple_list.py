def main():
    # List of tuples containing student records (name, age)
    student_records = [
        ("Alice", 20),
        ("Bob", 22),
        ("Charlie", 19),
        ("David", 21),
        ("Eva", 23)
    ]

    # Accessing elements of the tuple
    print("Student records:")
    for student in student_records:
        name, age = student
        print(f"Name: {name}, Age: {age}")

    # Adding a new student record to the list
    new_student = ("Frank", 18)
    student_records.append(new_student)

    # Updating a student's age by finding their name
    search_name = "Alice"
    new_age = 21
    for i, (name, age) in enumerate(student_records):
        if name == search_name:
            student_records[i] = (name, new_age)

    # Deleting a student record by name
    delete_name = "Eva"
    student_records = [student for student in student_records if student[0] != delete_name]

    # Printing the updated student records
    print("\nUpdated Student records:")
    for student in student_records:
        name, age = student
        print(f"Name: {name}, Age: {age}")


if __name__ == "__main__":
    main()

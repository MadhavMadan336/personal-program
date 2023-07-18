def main():
    # Lists
    fruits_list = ["apple", "banana", "orange", "grape", "mango"]
    numbers_list = [1, 2, 3, 4, 5]

    print("List examples:")
    print("Fruits List:", fruits_list)
    print("Numbers List:", numbers_list)

    # Tuples
    person_tuple = ("John", 30, "Male")
    coordinates_tuple = (10.5, 20.3)

    print("\nTuple examples:")
    print("Person Tuple:", person_tuple)
    print("Coordinates Tuple:", coordinates_tuple)

    # Dictionaries
    student_info = {
        "name": "Alice",
        "age": 25,
        "gender": "Female",
        "major": "Computer Science"
    }

    country_population = {
        "USA": 328_200_000,
        "China": 1_394_015_977,
        "India": 1_366_417_754,
        "Brazil": 209_288_278,
        "Russia": 143_964_709
    }

    print("\nDictionary examples:")
    print("Student Info:", student_info)
    print("Country Population:", country_population)


if __name__ == "__main__":
    main()

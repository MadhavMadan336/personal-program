class Student:
    def __init__(self, name, age, courses):
        self.name = name
        self.age = age
        self.courses = courses

    def add_course_grade(self, course_name, grade):
        self.courses[course_name] = grade

    def get_average_grade(self):
        total_grades = sum(self.courses.values())
        return total_grades / len(self.courses)

# Creating a student object and adding course grades
courses_data = {'Math': 85, 'Science': 92, 'History': 78}
student1 = Student('John Doe', 17, courses_data)

# Adding a new course and grade for the student
student1.add_course_grade('English', 88)

# Accessing student information and average grade
print(f"Student Name: {student1.name}")
print(f"Student Age: {student1.age}")
print(f"Courses: {student1.courses}")
print(f"Average Grade: {student1.get_average_grade()}")

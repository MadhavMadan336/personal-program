# Defining a function that returns a tuple
def get_person_info(name, age):
    return name, age

# Creating a class that uses a tuple as an attribute
class Student:
    def __init__(self, name, scores):
        self.name = name
        self.scores = scores
    
    def average_score(self):
        return sum(self.scores) / len(self.scores)

# Using the function to get a tuple
person_info = get_person_info("Alice", 25)
print("Person info:", person_info)

# Creating a Student instance and accessing attributes and methods
student_scores = [85, 92, 78, 90]
student = Student("Bob", student_scores)
print("Student name:", student.name)
print("Student scores:", student.scores)
print("Average score:", student.average_score())

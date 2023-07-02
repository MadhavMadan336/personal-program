class MyClass:
    def __init__(self, name):
        self.name = name
    
    def say_hello(self):
        print("Hello, " + self.name + "!")
    
# Create an instance of the class
obj = MyClass("John")

# Call the method
obj.say_hello()

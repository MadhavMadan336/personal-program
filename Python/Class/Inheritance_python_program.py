class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print("The animal makes a sound.")

class Dog(Animal):
    def speak(self):
        print("The dog barks.")

class Cat(Animal):
    def speak(self):
        print("The cat meows.")

# Create instances of the classes
animal = Animal("Generic Animal")
dog = Dog("Tommy")
cat = Cat("Whiskers")

# Call the speak() method on each object
animal.speak()  # Output: The animal makes a sound.
dog.speak()     # Output: The dog barks.
cat.speak()     # Output: The cat meows.

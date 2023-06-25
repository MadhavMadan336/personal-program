class Animal:
    def sound(self):
        pass

class Dog(Animal):
    def sound(self):
        print("Woof!")

class Cat(Animal):
    def sound(self):
        print("Meow!")

class Cow(Animal):
    def sound(self):
        print("Moo!")

# Create instances of different animals
dog = Dog()
cat = Cat()
cow = Cow()

# Call the sound method for each animal
dog.sound()  # Output: Woof!
cat.sound()  # Output: Meow!
cow.sound()  # Output: Moo!

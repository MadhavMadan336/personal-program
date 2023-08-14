class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

class Cow(Animal):
    def speak(self):
        return "Moo!"

# Polymorphism in action
def make_animal_speak(animal):
    print(animal.speak())

dog = Dog()
cat = Cat()
cow = Cow()

make_animal_speak(dog)  # Output: Woof!
make_animal_speak(cat)  # Output: Meow!
make_animal_speak(cow)  # Output: Moo!

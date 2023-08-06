class Animal:
    def sound(self):
        pass

class Dog(Animal):
    def sound(self):
        return "Woof!"

class Cat(Animal):
    def sound(self):
        return "Meow!"

class Bird(Animal):
    def sound(self):
        return "Chirp!"

def make_sound(animal):
    print(animal.sound())

# Using polymorphism with different animal objects
dog = Dog()
cat = Cat()
bird = Bird()

make_sound(dog)   # Output: "Woof!"
make_sound(cat)   # Output: "Meow!"
make_sound(bird)  # Output: "Chirp!"

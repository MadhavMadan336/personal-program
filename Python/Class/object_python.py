class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.speed = 0

    def accelerate(self, increment):
        self.speed += increment

    def brake(self, decrement):
        if self.speed >= decrement:
            self.speed -= decrement
        else:
            self.speed = 0

    def display(self):
        print(f"Car: {self.make} {self.model} {self.year}")
        print(f"Speed: {self.speed} km/h")


# Creating car objects
car1 = Car("Toyota", "Camry", 2020)
car2 = Car("Honda", "Civic", 2018)

# Displaying initial state of cars
car1.display()
car2.display()

# Accelerating car1
car1.accelerate(50)
car1.display()

# Accelerating car2
car2.accelerate(30)
car2.display()

# Braking car1
car1.brake(20)
car1.display()

# Braking car2
car2.brake(15)
car2.display()

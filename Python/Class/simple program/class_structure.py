class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.mileage = 0

    def drive(self, distance):
        self.mileage += distance
        print(f"Driving {distance} miles.")

    def display_info(self):
        print(f"Car: {self.year} {self.make} {self.model}")
        print(f"Mileage: {self.mileage} miles")

# Create instances of the Car class
car1 = Car("Toyota", "Camry", 2022)
car2 = Car("Honda", "Civic", 2023)

# Use methods to interact with the instances
car1.drive(100)
car1.display_info()

car2.drive(150)
car2.display_info()

class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.is_running = False

    def start(self):
        if not self.is_running:
            self.is_running = True
            print(f"The {self.make} {self.model} has been started.")
        else:
            print(f"The {self.make} {self.model} is already running.")

    def stop(self):
        if self.is_running:
            self.is_running = False
            print(f"The {self.make} {self.model} has been stopped.")
        else:
            print(f"The {self.make} {self.model} is already stopped.")

    def drive(self, distance):
        if self.is_running:
            print(f"The {self.make} {self.model} is driving for {distance} miles.")
        else:
            print(f"The {self.make} {self.model} needs to be started before driving.")

# Creating instances of the Car class
car1 = Car("Toyota", "Corolla", 2020)
car2 = Car("Honda", "Civic", 2021)

# Accessing attributes and calling methods on car1
print(car1.make)  # Output: Toyota
print(car1.model)  # Output: Corolla
print(car1.year)  # Output: 2020

car1.start()  # Output: The Toyota Corolla has been started.
car1.drive(10)  # Output: The Toyota Corolla is driving for 10 miles.
car1.stop()  # Output: The Toyota Corolla has been stopped.

# Accessing attributes and calling methods on car2
print(car2.make)  # Output: Honda
print(car2.model)  # Output: Civic
print(car2.year)  # Output: 2021

car2.start()  # Output: The Honda Civic has been started.
car2.drive(5)  # Output: The Honda Civic is driving for 5 miles.
car2.stop()  # Output: The Honda Civic has been stopped.

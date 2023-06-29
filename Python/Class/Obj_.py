class Car:
    def __init__(self, brand, model, color):
        self.brand = brand
        self.model = model
        self.color = color
        self.is_running = False

    def start(self):
        if self.is_running:
            print("The car is already running.")
        else:
            self.is_running = True
            print(f"The {self.color} {self.brand} {self.model} has started.")

    def stop(self):
        if not self.is_running:
            print("The car is already stopped.")
        else:
            self.is_running = False
            print(f"The {self.color} {self.brand} {self.model} has stopped.")


# Create an instance of the Car class
my_car = Car("Toyota", "Camry", "red")

# Accessing object attributes
print(f"Brand: {my_car.brand}")
print(f"Model: {my_car.model}")
print(f"Color: {my_car.color}")

# Calling object methods
my_car.start()
my_car.stop()
my_car.start()

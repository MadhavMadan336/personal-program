class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.speed = 0

    def accelerate(self, mph):
        self.speed += mph

    def brake(self, mph):
        if self.speed >= mph:
            self.speed -= mph
        else:
            self.speed = 0

    def get_speed(self):
        return self.speed

# Create an instance of the Car class
my_car = Car("Toyota", "Corolla", 2021)

# Accelerate the car
my_car.accelerate(30)

# Print the current speed
print("Current speed:", my_car.get_speed())

# Brake the car
my_car.brake(15)

# Print the current speed after braking
print("Current speed:", my_car.get_speed())

class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.engine_status = "off"
        self.speed = 0

    def start_engine(self):
        if self.engine_status == "off":
            self.engine_status = "on"
            print("Engine started.")
        else:
            print("Engine is already running.")

    def stop_engine(self):
        if self.engine_status == "on":
            self.engine_status = "off"
            self.speed = 0
            print("Engine stopped.")
        else:
            print("Engine is already off.")

    def accelerate(self, mph):
        if self.engine_status == "on":
            self.speed += mph
            print(f"Accelerating. Current speed: {self.speed} mph.")
        else:
            print("Cannot accelerate. Engine is off.")

    def brake(self):
        if self.speed > 0:
            self.speed -= 5
            print(f"Applying brakes. Current speed: {self.speed} mph.")
        else:
            print("Car is already stationary.")

# Creating an instance of the Car class
my_car = Car("Toyota", "Corolla", 2021)

# Using the methods of the Car class
my_car.start_engine()
my_car.accelerate(30)
my_car.brake()
my_car.stop_engine()

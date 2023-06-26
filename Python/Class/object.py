class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year
        self.is_running = False

    def start_engine(self):
        self.is_running = True
        print("Engine started.")

    def stop_engine(self):
        self.is_running = False
        print("Engine stopped.")

    def drive(self):
        if self.is_running:
            print(f"{self.brand} {self.model} is driving.")
        else:
            print(f"{self.brand} {self.model} cannot drive. Start the engine first.")


# Creating car objects
car1 = Car("Toyota", "Camry", 2020)
car2 = Car("Honda", "Accord", 2021)

# Interacting with car objects
car1.start_engine()
car1.drive()

car2.start_engine()
car2.drive()

car1.stop_engine()
car1.drive()

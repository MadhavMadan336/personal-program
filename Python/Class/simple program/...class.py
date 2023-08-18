class BankAccount:
    def __init__(self, account_number, balance):
        self.account_number = account_number
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited ${amount}. New balance: ${self.balance}")

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.balance}")
        else:
            print("Insufficient funds!")

    def get_balance(self):
        return self.balance

# Create an instance of the BankAccount class
account1 = BankAccount("123456789", 1000)

# Deposit and withdraw funds
account1.deposit(500)
account1.withdraw(200)
account1.withdraw(800)

# Get current balance
balance = account1.get_balance()
print(f"Current balance: ${balance}")

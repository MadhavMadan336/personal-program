def greet(name):
    """This function greets the person passed in as a parameter."""
    print("Hello, " + name + ". How are you today?")

def main():
    user_name = input("Please enter your name: ")
    greet(user_name)

if __name__ == "__main__":
    main()

import multiprocessing

def square_numbers():
  for i in range(5):
        result = i * i
    print(f"The number {i} squares to {result}")

if __name__ == "__main__":
    # Create a process
    p1 = multiprocessing.Process(target=square_numbers)

    # Start the process
    p1.start()

    # Wait for the process to finish
    p1.join()

    print("End of main")

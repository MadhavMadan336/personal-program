class Dictionary:
    def __init__(self):
        self.entries = {}

    def add_entry(self, key, value):
        self.entries[key] = value

    def remove_entry(self, key):
        if key in self.entries:
            del self.entries[key]
        else:
            print(f"Key '{key}' not found in the dictionary.")

    def search_entry(self, key):
        if key in self.entries:
            return self.entries[key]
        else:
            return f"Key '{key}' not found in the dictionary."

    def display_entries(self):
        print("Dictionary Entries:")
        for key, value in self.entries.items():
            print(f"{key}: {value}")


# Usage example
my_dict = Dictionary()

my_dict.add_entry("apple", "A fruit")
my_dict.add_entry("car", "A vehicle")
my_dict.add_entry("python", "A programming language")

my_dict.display_entries()

print(my_dict.search_entry("apple"))
print(my_dict.search_entry("banana"))

my_dict.remove_entry("car")
my_dict.display_entries()

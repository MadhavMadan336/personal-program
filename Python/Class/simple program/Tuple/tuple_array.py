class TupleArray:
    def __init__(self, *args):
        self._data = list(args)

    def __getitem__(self, index):
        return self._data[index]

    def __len__(self):
        return len(self._data)

    def __str__(self):
        return str(tuple(self._data))

    def append(self, item):
        self._data.append(item)

    def remove(self, item):
        self._data.remove(item)

# Example usage:
if __name__ == "__main__":
    t = TupleArray(1, 2, 3, 4, 5)
    print("Original TupleArray:", t)

    t.append(6)
    print("After appending 6:", t)

    t.remove(3)
    print("After removing 3:", t)

    print("Element at index 2:", t[2])
    print("Length of TupleArray:", len(t))

class Buffer {
public:
    Buffer(size_t n) : size(n), data(new int[n]) {}
    Buffer(Buffer&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
    }
private:
    int* data;
    size_t size;
};

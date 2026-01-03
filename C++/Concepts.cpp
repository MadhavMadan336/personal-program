template<typename T>
concept Number = std::is_arithmetic_v<T>;

template<Number T>
T add(T a, T b) { return a + b; }

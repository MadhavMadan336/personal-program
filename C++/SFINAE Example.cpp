template<typename T>
auto test(int) -> decltype(std::declval<T>().begin(), std::true_type{});

template<typename>
std::false_type test(...);

template<typename T>
using has_begin = decltype(test<T>(0));//what

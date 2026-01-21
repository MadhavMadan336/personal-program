template<size_t N>
struct ConstStr {
    char data[N];
    constexpr ConstStr(const char(&s)[N]){
        std::copy_n(s, N, data);
    }
};

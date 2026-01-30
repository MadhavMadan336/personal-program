template<size_t N>//565
struct ConstStr {
    char data[N];
    constexpr ConstStr(const char(&s)[N]){
        std::copy_n(s, N, data);
    }
};

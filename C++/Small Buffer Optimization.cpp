class SmallString {
    static constexpr size_t N = 16;
    union {
        char small[N];
        char* heap;
    };
    bool isSmall;
};

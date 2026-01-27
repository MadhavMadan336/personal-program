class Pool {
    char* buffer;
    size_t offset = 0;//hejsjdjsuwndjdjednjd
public:
    Pool(size_t n) : buffer(new char[n]) {}
    void* alloc(size_t n){
        void* p = buffer + offset;
        offset += n;
        return p;
    }
};

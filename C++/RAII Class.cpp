class File {
public:
    File(const char* name) { f = fopen(name, "w"); }
    ~File(){ fclose(f); }
private:
    FILE* f;
};

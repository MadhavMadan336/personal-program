template<typename SortPolicy>
class Data {
public:
    void sort() { SortPolicy::sort(data); }
    std::vector<int> data;
};

struct Asc {
    static void sort(std::vector<int>& v){ std::sort(v.begin(), v.end()); }
};

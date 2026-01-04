void draw(int, std::true_type){ std::cout << "int\n"; }
void draw(int, std::false_type){ std::cout << "other\n"; }

template<typename T>
void draw(T t){
    draw(t, std::is_integral<T>{});
}

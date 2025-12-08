template<typename L, typename R>
class AddExpr {
public:
    auto operator[](int i) const { return l[i] + r[i]; }
    L const& l; R const& r;
};

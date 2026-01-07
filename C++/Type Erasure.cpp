class AnyCallable {
    struct Base {
        virtual void call() = 0;
        virtual ~Base() = default;
    };
    template<typename F>
    struct Impl : Base {
        F f;
        Impl(F fn) : f(fn) {}
        void call() override { f(); }
    };
    std::unique_ptr<Base> ptr;
public:
    template<typename F>
    AnyCallable(F f) : ptr(std::make_unique<Impl<F>>(f)) {}
    void operator()(){ ptr->call(); }
};

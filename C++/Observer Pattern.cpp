class Observer {
public:
    virtual void update(int) = 0;
};

class Subject {
    int state;
    std::vector<Observer*> obs;
public:
    void attach(Observer* o){ obs.push_back(o); }
    void setState(int s){
        state = s;
        for(auto o: obs) o->update(state);
    }
};

#include <iostream>
using namespace std;

class baseClass1 {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class" << endl;
    }
};

class derivedClass : public baseClass1 {
public:
    void perkenalan() override {
        cout << "Hallo saya Function dari derived Class" << endl;
    }
};

class baseClass final {
public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class" << endl;
    }
};

int main() {
    return 0;
}
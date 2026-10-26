
#include <iostream>
using namespace std;

class Base {
public:
    void Normal() {
        cout << "Base::normal (early binding)\n";
    }

    virtual void Special() {
        cout << "Base::special\n";
    }
};

class Derived : public Base {
public:
    void Normal() {
        cout << "Derived::normal\n";
    }

    void Special() override {
        cout << "Derived::special (late binding)\n";
    }
};

int main() {
    Derived d;
    Base* p = &d;

    p->Normal();
    p->Special();

    return 0;
}

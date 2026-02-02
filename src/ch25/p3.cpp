#include <iostream>

struct Base {
    int* data;

    Base(int v) {
        data = new int(v);
        std::cout << "Base constructed\n";
    }

    // COPY CONSTRUCTOR
    Base(const Base& other) {
        data = other.data;
        std::cout << "Base copied\n";
    }

    ~Base() {
        delete data;
        std::cout << "Base destroyed\n";
    }
};

struct Derived : Base {
    int* more;

    Derived(int a, int b) : Base(a) {
        more = new int(b);
        std::cout << "Derived constructed\n";
    }

    // NO copy constructor defined here

    ~Derived() {
        delete more;
        std::cout << "Derived destroyed\n";
    }
};

int main() {
    Derived d1(10, 20);
    Derived d2 = d1;
}

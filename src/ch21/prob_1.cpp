#include <iostream>
using std::cout;

int x = 10;

void f() {
    cout << "f: x = " << x << "\n";
}

int main() {
    cout << "main start: x = " << x << "\n";

    int x = 20;
    cout << "main block: x = " << x << "\n";

    {
        int x = 30;
        cout << "inner block: x = " << x << "\n";
        f();
    }

    f();
}

// output should be -- 10 20 30 10 10
#include<iostream>
using std::cout;

int* make_ptr() {
    static int x = 42;
    return &x;
}

int main() {
    int* p = make_ptr();
    cout << *p << "\n";
}

// the program here shows that
/*
returning pointer functions can only return :
1: it is a static storage duration
2: It is a dynamic storage duration
*/
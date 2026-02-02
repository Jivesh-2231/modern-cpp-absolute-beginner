#include<iostream>

struct base{
    int x;

    base(int v): x{v} {
        std::cout << "base constructed\n";
    }

    ~base(){
        std::cout << "base destructed\n";
    }
};

struct derived : base{
    int y;

    derived(int a, int b): base{a}, y{b} {
        std::cout << "derived constructor\n";
    }

    ~derived(){
        std::cout << "derived destruvted\n";
    }
};

int main(){
    derived d(1, 2);
}
#include<iostream>

struct Base{
    int* data;

    Base(int v){
        data = new int{v};
        std::cout << "Base constructed\n";
    }
    
    ~Base(){
        delete data;
        std::cout << "Base destructor\n";
    }
};

struct Derived : Base{
    int* more;

    Derived(int a, int b): Base(a) {
        more = new int{b};
        std::cout << "Derived constructor\n";
    }

    ~Derived(){
        delete more;
        std::cout << "Derived destructor\n";
    }
};

int main(){
    Derived d(10, 20);
}
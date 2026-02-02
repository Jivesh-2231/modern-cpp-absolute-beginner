#include<iostream>

struct Base{
    int* data;

    Base(int v){
        data = new int{v};
        std::cout << "Base constructed\n";
    }

    //copy constructor
    Base(const Base& other){
        data = new int{*other.data};
    }

    //copy assignment operator
    Base& operator=(const Base& other){
        if(this == &other) return *this;

        delete data;
        data = new int{*other.data};
        return *this;
    }

    ~Base(){
        delete data;
        std::cout << "Base Destructor\n";
    }
};

struct Derived : Base{
    int* more;

    Derived(int a, int b): Base{a} {
        more = new int{b};
        std::cout << "Derived constructed\n";
    }

    //copy constructor
    Derived(const Derived& other): Base(other) {
        more = new int{*other.more};
    }

    //copy assignment operator
    Derived& operator=(const Derived& other){
        if(this==&other) return *this;

        Base::operator=(other);

        delete more;
        more = new int{*other.more};
        return *this;
    }


    ~Derived(){
        delete more;
        std::cout << "Derived destructor\n";
    }
};

int main(){
    Derived d1(1,2);
    Derived d2 = d1;

    Derived d3(3,4);
    d3 = d2;
}
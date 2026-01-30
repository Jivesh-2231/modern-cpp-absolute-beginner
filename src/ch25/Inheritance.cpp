#include<iostream>

class Mybaseclass{
    public:
        virtual void dowork(){
            std::cout << "Hello from the base class." << "\n";
        }
};

class Myderivedclass : public Mybaseclass{
    public:
        void dowork(){
            std::cout << "hello from the derived class." << "\n";
        }
};

int main(){
    Mybaseclass* o = new Myderivedclass;
    o->dowork();
    delete o;
}
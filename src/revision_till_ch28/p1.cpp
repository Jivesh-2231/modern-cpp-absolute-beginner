#include<iostream>

class Box{
    int* value;
    public:
        Box(int v){
            value = new int{v};
        }

        //copy constructor
        Box(const Box& other){
            value = new int{*other.value};
        }

        ~Box(){
            delete value;
        }

        int get() const{
            return *value;
        }
};

int main(){
    Box a(10);
    Box b = a;

    std::cout << a.get() << std::endl;
    std::cout << b.get() << std::endl;
}
#include<iostream>

template <typename T>
class Holder{
    T value;
    public:
        Holder(T v): value{v} {}

        void set(T v){
            value = v;
        }

        T get() const {
            return value;
        }
};

int main(){
    Holder<double> h2(20);
    Holder<int> h1(10);
    h1.set(20);
    h2.set(2);

    std::cout << h1.get() << std::endl;
    std::cout << h2.get() << std::endl;

}
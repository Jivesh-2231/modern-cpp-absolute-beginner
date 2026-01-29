#include<iostream>
using std::cout;
using std::endl;

class Box2{
        int x;
        int d;
    public:
        Box2(int xx,int yy): x{xx},d{yy} {}

        //Binary operator overloads
        // += operator overload
        Box2& operator+=(const Box2& other){
            x += other.x;
            d += other.d;
            cout << "value of x and d with (+=)overload is : " << x << " " << d << endl;
            return *this;
        }

        // + operator overload
        Box2 operator+(const Box2& other){
            Box2 tmp = *this;
            tmp += other;
            return tmp;
        }

        /*

        + operator using the friend function

        friend Box2 operator+(Box2&numA,const Box2&numB){
            return Box2{numA.x + numB.x};
        }
            it contain this as well

            numA += numB;
            return numA;
            
            primarily because += operator overload is there in the code

        */
};

class Box{
        int x;
    public:
        Box(int v): x{v}{}

        //prefix operator overload
        Box& operator++(){
            ++x;
            cout << "x is increased : x = " << x << endl;
            return *this;
        }

        //postfix operator overload
        Box operator++(int){
            Box old{*this}; // copy the old state
            ++(*this);
            cout << "x must be used before incremented : x = " << x << endl;
            return old;
        }
};

int main(){
    Box a{10};
    ++a;
    a++;
}
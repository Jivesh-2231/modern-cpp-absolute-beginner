#include<iostream>
using std::cout;
using std::endl;


class Myclass{
    private:
        int y;
    public:
        int x;

        void printx(){
            cout << x << endl;
        }
};

int main(){
    Myclass obj;
    obj.x = 123; // x is public, so we can access it directly
    obj.printx(); // prints 123
//    obj.y = 456; --> this by y is inaccessible.
    return 0;
}
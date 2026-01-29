#include<iostream>
using std::cout;
using std::endl;

class Myclass {
    public:
        int a,b;
        Myclass(int x , int y):a{x},b{y}{} // constructor
};

int main(){
    Myclass obj{0,1};
    cout << "Show values of a and b: " << obj.a << " " << obj.b << endl;
}


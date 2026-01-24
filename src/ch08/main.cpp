#include<iostream>
int main(){
    {
        //Problem - 1
        int a = 0;
        int b = 0;
        std::cin >> a >> b;
        a = a + b;
        b = a - b;
        a = a - b;
        std::cout << "a=" << a << " b=" << b;
    }
    std::cout << "\n\n";
    {
        //Problem - 2
        int a = 0;
        double b = 0.0;
        std::cin >> a >> b;
        std::cout << "sum=" << a+b << " product=" << a*b << " division=" << a/b;
    }
    std::cout << "\n\n";
    {
        //Problem - 3
        char c;
        int x;
        double d;
        std::cin >> c >> x >> d;
        std::cout << "c=" << c << " x=" << x << " d=" << d;
    }
}
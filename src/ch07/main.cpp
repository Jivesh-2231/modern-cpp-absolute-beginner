#include<iostream>
int main(){
    {
        //Problem - 1
        int x = 10;
        int y = 10;
        int a = x++ + 1;
        int b = ++y + 1;
        std::cout << "x=" << x << "\ty=" << y << "\ta=" << a << "\tb=" << b;
    }
    std::cout << "\n\n";
    {
        //Problem - 2
        int x = 10;
        x += 5;
        x *= 2;
        x -= 4;
        x /= 2;
        std::cout << "x = " << x;
    }
    std::cout << "\n\n";
    {
        //Problem - 3
        int a = 7;
        int b = 3;
        
        int r1 = a/b;
        int r2 = a%b;
        double r3 = (a*1.0)/b;
        int r4 = (a+b)/b;
        std::cout << "r1 = " << r1 << "\tr2 = " << r2 << "\tr3 = " << r3 << "\tr4 = " << r4; 
    }
}
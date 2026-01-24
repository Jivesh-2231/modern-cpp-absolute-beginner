#include<iostream>
int main(){
    int x = 123;
    int& y = x;

    // reference type now -- x and y boths holds the same value
    // x and y are two alias or names for that particular object in memory.

    std::cout << y;

    x = 456;
    //both x and y holds this value.

    std::cout << "x = " << x;
    std::cout << "y = " << y;
}
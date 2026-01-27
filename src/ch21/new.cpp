#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// this is the example of dynamic memory allocations.
int main() {
    int* p = new int[3]; /// this one is a array --or-- // new int{12}; --> this is thevalue allocating dynamically in heap
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;    
    cout << "the pointed-to value is :" << p[2] << endl;
    delete[] p;
}
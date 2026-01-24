#include<iostream>
int main(){
    int a = 123;
    char c = 'A';

    // pointers that points to certain types with address of different object(using address-of operator -- &)
    int* p = &a;
    char* q = &c;

    std::cout << "value of a from pointer(p) = " << *p << "\nvalue of c from pointer(q) = " << *q;
}
#include<iostream>

//question -- if x lo return lo, if x > hi return hi, else return x

int clamp(int x, int lo, int hi);

int main(){
    int x,lo,hi;
    std::cin >> x >> lo >> hi;
    std::cout << "result=" << clamp(x,lo,hi);
}

int clamp(int x, int lo, int hi){
    if (x < lo) return lo;
    if (x > hi) return hi;
    return x;
}
#include<iostream>

template <typename T>

T add(T a,T b){
    return a+b;
}

int main(){
    auto x = add(1.5,1.5);
    auto y = add(5,4);
}
#include<iostream>
using std::cout;
using std::endl;

int counter(){
    static int x = 1;
    return x++;
}

int main(){
    for(int i = 0; i<5; i++){
        cout << counter() << endl;
    }
}
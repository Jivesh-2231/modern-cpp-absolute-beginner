#include<iostream>

//question --> mirror a integer 

int mirror(int n);

int main(){
    int n;
    std::cin >> n;
    std::cout << "mirror=" << mirror(n);
}

int mirror(int n){
    int temp = n;
    int rev = 0;
    while(temp > 0){
        int r = temp % 10;
        rev = rev*10 + r;
        temp /= 10;
    }
    return rev;
}
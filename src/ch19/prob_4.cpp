#include<iostream>

//question --> turning integer into encoded form of numbers 
//like (111223 -> 312213 so three 1's two 2's one 3)

int encode(int n);

int main(){
    int n;
    std::cin >> n;
    std::cout << "answer = " << encode(n);
}

int encode(int n){
    int final = 0;
    int rev = 0;
    int temp = n;
    while(temp > 0){
        int r = temp % 10;
        rev = rev*10 + r;
        temp /= 10;
    }

    int previous = 0;
    int a = rev % 10;
    int x = 1;
    previous = a;
    rev /= 10;
    
    while(rev > 0){
        int a = rev % 10;
        if(a == previous){
            x++;
        }else{
            final = final*10 + x;
            final = final*10 + previous;
            x = 1;
        }
        rev /= 10;
        previous = a;
    }
    final = final*10 + x;
    final = final*10 + previous;
    return final;
}
#include<iostream>

//question --> balance function to check sum of even and odd digits of the integer passed

bool is_balanced(int n);

int main(){
    int n;
    std::cin >> n;
    if(is_balanced(n)){
        std::cout << "yes";
    }else{
        std::cout << "no";
    }
}

bool is_balanced(int n){
    int s_even = 0;
    int s_odd = 0;

    while(n > 0){
        int r = n % 10;
        if(r % 2 == 0){
            s_even += r;
        }else{
            s_odd += r;
        }
        n /= 10;
    }

    return s_even==s_odd;
}
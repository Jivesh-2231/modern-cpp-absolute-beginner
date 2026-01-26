#include<iostream>
int main(){
    // Problem --> to check the repeated digit in a integer.
    int x;
    std::cin >> x;
    
    int seen[10] = {0};

    if(x == 0){
        std::cout << "-1";
    }else{
        int rev = 0;
        int temp = x;
        while(temp > 0){
            int r = temp % 10;
            rev = rev*10 + r;
            temp /= 10;
        }

        bool found = false;
        while(rev > 0){
            int d = rev % 10;

            if(seen[d] == 1){
                std::cout << d;
                found = true;
                break;
            }else{
                seen[d] = 1;
                rev /= 10;
            }
        }

        if(!found){
            std::cout << "-1";
        }
    }
}
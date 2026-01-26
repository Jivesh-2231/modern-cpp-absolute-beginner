#include<iostream>
int main(){
    {
        // Problem 1 --> to check the repeated digit in a integer.
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

    std::cout << "\n\n\n";

    {
        //Problem 2 --> to count 3 digit numbers between two integers
        int a = 0;
        int b = 0;
        std::cin >> a >> b;
        int count = 0;
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(int i = a; i <= b; i++){
            if (i/100 != 0){
                count++;
            }
        }
        std::cout << "count=" << count;
    }

    std::cout << "\n\n\n";

    {
        //Problem 3 --> longest increasing streak for n integers
        int n = 0;
        std::cin >> n;
        if(n==0){
            std::cout << "len=0";
        }else{
            int x;
            std::cin >> x;
            int previous = x;
            int current_len = 1;
            int max_len = 1;

            for(int i = 1; i<n; i++){
                std::cin >> x;
                if (x > previous){
                    current_len++;
                }else{
                    current_len = 1;
                }

                if(max_len < current_len){
                    max_len = current_len;
                }
                previous = x;
            }
            std::cout << "len=" << max_len;
        }
    }
}
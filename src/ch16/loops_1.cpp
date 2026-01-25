#include<iostream>
int main(){
    {
        //Problem - 1 --- sum of every number between two numbers
        int a;
        int b;
        int sum = 0;
        std::cin >> a >> b;
        if (a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(int i = a; i <= b; i++){
            sum += i;
        }
        std::cout << "sum=" << sum;
    }

    std::cout << "\n\n\n";
    
    {
        //Problem - 2  -- no. of digits and sum of digits of a number
        int x;
        int digits = 0;
        int sum = 0;
        if(x < 0 || x > 1,000,000,000){
            std::cout << "Out of range!!";
        }else{
            if(x==0){
                digits = 1;
                sum = 0;
            }
            while(x>0){
                int r = x % 10;
                sum += r;
                x /= 10;
                digits++;
            }
        }
        std::cout << "digits=" << digits << " sum=" << sum;
    }

    std::cout <<"\n\n\n";

    {
        //Problem - 3 -- checking if the integers show strictly increasing patterns
        int n = 0;
        std::cin >> n;
        if(n<=0){
            std::cout << "no";
        }else{
            int x;
            std::cout << x;
            int previous = x;

            bool ok = true; // flag
            for(int i = 1; i<n; i++){
                std::cout << x;
                if(x <= previous){
                    ok = false;
                }
                previous = x;
            }

            if(ok){
                std::cout << "yes";
            }else{
                std::cout << "no";
            }
        }
    }
}
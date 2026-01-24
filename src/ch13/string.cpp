#include<iostream>
#include<string>

int main(){
    {
        std::string s = "Hello World";
        std::cout << s;
    }
    std::cout << "\n\n";
    {
        //Concatenating the Strings
        std::string s = "Hello ";
        s += "World"; // using conpounding operator
        std::cout << s;
    }
    std::cout << "\n\n";
    {
        //Accessing characters
        std::string s = "Hello World";
        char c1 = s[0];
        char c2 = s.at(6);
        std::cout << "c1 = " << c1 << "\nc2 = " << c2;
    }
    std::cout << "\n\n";
    {
        //Comparing Strings
        std::string s = "Hello World";
        if(s == "Hello World"){
            std::cout << "s is hello world\n";
        }
        std::string s1 = "World";
        if(s == s1){
            std::cout << "the strings are equal";
        }else{
            std::cout << "the strings are not equal";
        }
    }
    std::cout << "\n\n";
    {
        //String Input
        std::string s;
        std::cout << "Please enter a String : ";
        std::getline(std::cin,s);
        std::cout << s;
    }
}
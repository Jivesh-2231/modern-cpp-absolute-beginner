#include<iostream>
#include<string>
int main(){
    {
        //Problem - 1
        std::string s;
        std::getline(std::cin,s);
        std::cout << "you entered: ";
    }
    std::cout << "\n\n";
    {
        //Problem - 2
        std::string s1;
        std::string s2;
        std::getline(std::cin,s1);
        std::getline(std::cin,s2);
        std::string s3 = s1 + " " + s2;
        std::cout << s3;
    }
    std::cout << "\n\n";
    {
        //Problem - 3
        std::string s;
        char c;
        std::cout << "Enter string and character";
        std::getline(std::cin,s);
        std::cin >> c;

        std::string::size_type found = s.find(c);
        if(found != std::string::npos){
            std::cout << "position: " << found;
        }else{
            std::cout << "not found";
        }
    }
}
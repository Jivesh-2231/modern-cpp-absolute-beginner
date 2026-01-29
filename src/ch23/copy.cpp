#include<iostream>
using std::cout;
using std::endl;

class Box{
        int x;
    public:
        Box(int v): x{v} {
            cout << "default constructor\n";
        }

        //copy constructor
        Box(const Box& other): x{other.x} {
            cout << "copy constructor\n";
        }

        //copy assignment or operator
        Box& operator = (const Box& other){
            cout << "copy assignment\n";
            x = other.x;
            return *this;
        }
};

int main(){
    Box a(10);
    Box b(20);
    
    b = a; // making a copy a and putting it in b (where a and b both exists)
}

/*
// Here is the program for owning the pointer in a good way though the name of the file is still bad.cpp
//in short, if destructor is not created especially for pointers, there may occur two pointer while copying and
//each will behave like this 
// a.p ---> b.p ---> value ||| both pointer think they own te value
//so when the value is deleted, the porgram performs a delete for each pointer ---> creating a double delete
// it can show undefined behaviour leading to an error or crash and multiple bugs as well.

#include<iostream>
using std::cout, std::endl;

class Good{
        int* p;
    public:
        Good(int v) {
            p = new int{v};
        }

        ~Good(){
            delete p;
        }

        //copy constructor
        Good(const Good& other) {
            p = new int{*other.p};
        }

        //copy operator or assignment
        Good& operator=(const Good& other){
            if(this == &other) return *this;
            delete p;
            p = new int{*other.p};
            return *this;
        }
};

*/
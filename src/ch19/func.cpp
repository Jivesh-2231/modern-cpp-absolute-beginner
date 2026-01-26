#include<iostream>
#include<string>

// function declaration
// main body -------------- this is more preferred for now to keep track of all the functions and everything
// function definition

//or

//function definition -- will count as declaration as well
//main body

// void type -- no return
void myfunction(){
    std::cout << "Hello World from the function.";
}

// int type -- has return statements
int mysquarednumber(int x){
    return x * x;
}

//passing by reference
void myfunction_1(int& byreference){
    byreference++;
    std::cout << "\nthe value of reference passed is : " << byreference;
}

//passing by const reference
void myfunction_2(std::string& byconstreference){
    std::cout << "\nthe value of const reference : " << byconstreference;
}

int main(){
    myfunction();
    int myresult = mysquarednumber(2);
    std::cout << "\nSquare of number 2 : " << myresult;
    
    int x = 123;
    myfunction_1(x);

    std::string s = "Hello world !!";
    myfunction_2(s);
}



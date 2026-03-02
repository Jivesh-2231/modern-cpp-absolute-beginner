// This is for Implicit Conversion
// Using the pointer(a normal one that has has type stored in it)
// Using a Void pointer as well.

# include<iostream>

int main(){
    int x = 123;
    int* pint = &x;
    void* pvoid = pint;

    // till this point -> the "pvoid" pointer has only address of x, no type, no value.
    // accessing this pointer is no even allowed for many several reasons.
    // current way of accessing using the "STATIC_CAST"

    int* pint2 = static_cast<int*>(pvoid);
    // Casted a Void pointer to Int Pointer
    
    std::cout << *pint2; // Dereference a Pointer

}
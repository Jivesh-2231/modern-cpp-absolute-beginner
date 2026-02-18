#include<iostream>

enum class Days{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(){
    Days myday = Days::Monday;
    myday = Days::Friday;
}

// Scoped Enum is Preferred

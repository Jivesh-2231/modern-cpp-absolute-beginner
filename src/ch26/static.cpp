#include<iostream>


struct Users{
    int id;
    static int user_id;

    static int generate_user(){return ++user_id;}
    Users(): id{generate_user()} {}
};

int Users::user_id = 0;

struct Orders{
    int id;
    static int order_id;

    static int generate_order(){return ++order_id;}
    Orders(): id{generate_order()} {}
};

int Orders::order_id = 0;

int main(){
    Users u1;
    Users u2;

    Orders o1;
    Orders o2;

    std::cout << u1.id << "\t" << u2.id << std::endl;
    std::cout << o1.id << "\t" << o2.id << std::endl;
}
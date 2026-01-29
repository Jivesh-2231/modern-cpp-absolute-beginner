#include<iostream>
using std::cout;
using std::endl;

class Box{
        int* p;
    public:

        Box(int v) {
            p = new int{v};
        }

        ~Box(){
            if(p){
                cout << "Destructor : int with value : " << *p << endl;
            }else{
                cout << "Destructor : nothing value (Null ptr) : " << endl;
            }
            delete p;
        }

        //disabling copy constructor and copy operator
        Box(const Box&) = delete;
        Box& operator=(const Box&) = delete;

        //adding the move constructor
        Box(Box&& other) noexcept {
            cout << "Moving constructor\n";

            p = other.p;
            other.p = nullptr;
        }

        void show() const {
            if(p){
                cout << "Box holds memory : " << *p << endl;
            }else{
                cout << "Box holds nothing" << endl;
            }
        }
};

Box make_box(){
    Box b{100};
    return b;
}

int main(){
    cout << "-----creating x from temporary -----\n";
    Box x = make_box();

    cout << "State of x ---------\n";
    x.show();
}
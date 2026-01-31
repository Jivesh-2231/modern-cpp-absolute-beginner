#include<iostream>

class Buffer{
    int* data;
    int size;
    public:

    Buffer(int s): size{s} {
        data = new int[size];

        for(int i = 0; i<size; i++){
            data[i] = i;
        }
        std::cout << "Constructed\n";
    }

    //copy constructor
    Buffer(const Buffer& other): size{other.size} {
        data = new int[size];

        for (int i =0; i<size; i++){
            data[i] = other.data[i];
        }
        std::cout << "Copy Constructor Invoked\n";
    }

    ~Buffer(){
        delete[] data;
        std::cout << "Destructor\n";
    }
};

int main() {
    Buffer a(3);
    Buffer b = a;
    return 0;
}
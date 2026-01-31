#include <iostream>

class Buffer {
private:
    int* data;
    int size;

public:
    Buffer(int s) : size{s} {
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        std::cout << "Buffer constructed\n";
    }
    
    //copy constructor here
    Buffer(const Buffer& other) : size{other.size} {
        data = new int[size];

        for(int i = 0; i<size; i++){
            data[i] = other.data[i];
        }
    }

    ~Buffer() {
        delete[] data;
        std::cout << "Buffer destroyed\n";
    }
};

class Wrapper {
private:
    Buffer buf;

public:
    Wrapper(int s) : buf(s) {
        std::cout << "Wrapper constructed\n";
    }
};

int main() {
    Wrapper w1(3);
    Wrapper w2 = w1;   // copy Wrapper
    return 0;
}

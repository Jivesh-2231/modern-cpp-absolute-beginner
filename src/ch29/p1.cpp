#include <iostream>

enum Status {
    Pending,
    Filled,
    Cancelled
};

void process(Status s) {
    if (s == 1) {
        std::cout << "Filled\n";
    }
}

int main(){}

// Problem: Dangling Pointer

#include <iostream>

class Ex {
public:
Ex() {
    p = new int;
    std::cout << "Zero  arg. Constructor\n";
}

~Ex() {
    delete p;
    p = NULL; // nullptr;
    std::cout << "Destructor\n";
}
    private:
    int* p;
};

int main() {

    Ex ob1;
    Ex ob2;

    Ex ob3 = ob1;
}
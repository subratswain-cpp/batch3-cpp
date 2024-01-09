#include <iostream>

class Ex {
 public:
  Ex() {
    p = new int;
    std::cout << "Zero  arg. Constructor\n";
  }

  Ex(const Ex& other) { // DEEP COPY
    // p = other.p; // Default implementation =====> Shallow Copy
    p = new int;
    *p = *(other.p);
    std::cout << "Copy Constr\n";
  }

  ~Ex() {
    delete p;
    p = NULL;  // nullptr;
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

#include <iostream>

class Ex {
 private:
  const int a;

 public:
  Ex() : a(100) {
    // a = 100; // Not allowed. Only const can be initialized in initializer list.
  }

  void display() const { std::cout << "Const Verson:" << a << '\n'; }
//   void display() { std::cout << "Non Const Verson:" << a << '\n'; }
// Function overloading allowed wrt const.

};

int main() {
  // const int a = 10; // needs to be initialized during declaration.
  // std::cout << a << '\n';

  Ex obj1;
  obj1.display();
}


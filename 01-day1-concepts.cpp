#include <iostream>

// using namespace std; // AVOID

class Ex;  // Forward declaration
void printalldata(Ex);

class Ex {
 private:
  int _a;
  double _b;

 public:
  // Setter
  void setA(int a) { _a = a; }

  void setB(double b) { _b = b; }

  void setData(int a, double b) {
    _a = a;
    _b = b;
  }

  // getters...
  int getA() { return _a; }

  double getB() { return _b; }

  void printall() {
    std::cout << "Value of a is " << _a << "\nValue of _b is " << _b
              << '\n';  // std::endl => '\n + flush the buffer
  }
};

int main() {
  Ex obj1;
  obj1.setA(100);
  obj1.setB(20.5);

  Ex obj2;
  obj2.setData(200, 200.6);

  obj1.printall();
  obj2.printall();

  printalldata(
      obj1);  // Expect: It should print all the data members of object1.
}

// Definination
void printalldata(Ex o) { o.printall(); }

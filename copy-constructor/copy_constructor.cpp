#include <iostream>

class Ex {
 public:
  // Constructor
  Ex() { std::cout << __PRETTY_FUNCTION__ << " is called by " << this << '\n'; }

  // Copy constructor-Pass as reference. Why not Object?=> Recursive call ended
  // with program termination due to stack overflow.
  explicit Ex(const Ex& other) {
    a = other.a;
    b = other.b;
    std::cout << "Copy constructor\n";
  }

  // Destructor
  ~Ex() {
    std::cout << __PRETTY_FUNCTION__ << " is called by " << this << '\n';
  }

  explicit Ex(int aa) {
    a = aa;
    b = 0.0;
  }

 void display() const {
    std::cout << "a = " << a << " \nb = " << b << '\n';
 }

 private:
  int a;
  double b;
};

int main() {
  Ex ob1;
//   Ex ob2;

//   std::cout << " Address of ob1 = " << &ob1 << '\n';
//   std::cout << " Address of ob2 = " << &ob2 << '\n';

Ex ob3(ob1); // copy constructor.

// Ex ob4 = ob1; // copy constructor. because of explicit constructor, it won't allow oject creation using implicit conversion. Remove explicit from constructor & check!
// Ex ob5 = 10; // Ex ob5(10);
// ob5.display(); // 

}
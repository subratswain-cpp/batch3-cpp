#include <iostream>

class Ex {
 public:
  Ex() {}
  void fun() const { std::cout << __PRETTY_FUNCTION__ << '\n'; }

 private:
  int a;
};

int main() {
  const Ex cobj;  
  cobj.fun(); // const object only calls const function to make sure it won't change the state.
}

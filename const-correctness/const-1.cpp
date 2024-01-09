#include <iostream>

class Ex {
 public:
  void fun() { std::cout << __PRETTY_FUNCTION__ << '\n'; }

 private:
  int a;
};

int main() {
  const Ex cobj;  // Won't work. Provide constructor to fix this issue. Const variable/object needs to be initialized during declaration through constructor.

}

// Const protect us from Accidentaly modifying data

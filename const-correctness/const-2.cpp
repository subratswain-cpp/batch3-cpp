#include <iostream>

class Ex {
 public:
  void fun() { std::cout << __PRETTY_FUNCTION__ << '\n'; }

  void fun(int) const { std::cout << __PRETTY_FUNCTION__ << '\n'; }

 private:
  void test() {}
  int a;
};

class Ex1 {
 public:
  Ex1(int p_a) { a = p_a; }
  void display() const { std::cout << "A = " << a << '\n'; }

  void
  const_nonconst_test() {  // Can non-const func call const function/const data?
    display();             // const func.
  }

  void nonc_fun() { std::cout << __PRETTY_FUNCTION__ << '\n'; }
  void nonconst_const_test()
      const {   // Can non-const func call const function/const data?
    display();  // const func
    // nonc_fun(); // nc func. // CHECK: Uncomment & Check.
  }

 private:
  int a;
};

int main() {
  const Ex cobj{};  // Won't work in C++03. Only from C++11 onwards
                    // initializerlist works....
  cobj.fun(1);

  const Ex1 cobj2(10);
  cobj2.display();

  // Can non-const func call const function/const data?=> Yes
  Ex1 obj(50);
  obj.const_nonconst_test();
  // Can const func call non-const function/non-const data?=> No
}

// Const protect us from Accidentaly modifying data

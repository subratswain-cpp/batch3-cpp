###Copy constructor example with code in C++

Example of a copy constructor in C++:

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    // Default constructor
    MyClass() {
        data = 0;
    }

    // Parameterized constructor
    MyClass(int value) {
        data = value;
    }

    // Copy constructor
    MyClass(const MyClass &obj) {
        data = obj.data;
        cout << "Copy constructor is called" << endl;
    }
};

int main() {
    MyClass obj1(10); // Using parameterized constructor
    MyClass obj2 = obj1; // Using copy constructor

    cout << "obj1.data: " << obj1.data << endl;
    cout << "obj2.data: " << obj2.data << endl;

    return 0;
}
```

In this example, we have a class `MyClass` with a default constructor, a parameterized constructor, and a copy constructor. When we create `obj2` using `obj1`, the copy constructor is called, and the `data` member of `obj1` is copied to `obj2`.

###Shallow copy Vs Deep Copy example with explanation

Example of Shallow Copy:
```cpp
#include <iostream>
#include <cstring>
using namespace std;

class ShallowCopy {
private:
    char *name;

public:
    // Constructor
    ShallowCopy(const char *inputName) {
        name = new char[strlen(inputName) + 1];
        strcpy(name, inputName);
    }

    // Shallow copy constructor
    ShallowCopy(const ShallowCopy &source) : name(source.name) {}

    // Destructor
    ~ShallowCopy() {
        delete[] name;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    ShallowCopy obj1("Subrat");
    ShallowCopy obj2 = obj1; // Shallow copy

    obj1.displayName();
    obj2.displayName();

    return 0;
}
```

In this example, the `ShallowCopy` class contains a dynamically allocated `name` member. The shallow copy constructor simply copies the pointer to the `name` member, resulting in both objects pointing to the same memory location. When one object is destroyed, it will deallocate the memory, leaving the other object with a dangling pointer.

Deep Copy:
```cpp
#include <iostream>
#include <cstring>
using namespace std;

class DeepCopy {
private:
    char *name;

public:
    // Constructor
    DeepCopy(const char *inputName) {
        name = new char[strlen(inputName) + 1];
        strcpy(name, inputName);
    }

    // Deep copy constructor
    DeepCopy(const DeepCopy &source) {
        name = new char[strlen(source.name) + 1];
        strcpy(name, source.name);
    }

    // Destructor
    ~DeepCopy() {
        delete[] name;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    DeepCopy obj1("Subrat");
    DeepCopy obj2 = obj1; // Deep copy

    obj1.displayName();
    obj2.displayName();

    return 0;
}
```

In this example, the `DeepCopy` class also contains a dynamically allocated `name` member. The deep copy constructor allocates new memory for the `name` member and copies the content from the source object, ensuring that each object has its own independent copy of the data.

In summary, a shallow copy simply copies the memory address of the data, while a deep copy allocates new memory and copies the actual data, resulting in two independent copies.

###Explain function Overloading with example.
Function overloading in C++ allows you to define multiple functions with the same name but different parameter lists. The compiler determines which function to call based on the number and types of arguments provided. Here's an example of function overloading in C++:

```cpp
#include <iostream>
using namespace std;

class OverloadExample {
public:
    // Function with one integer parameter
    void display(int num) {
        cout << "Integer number: " << num << endl;
    }

    // Function with two integer parameters
    void display(int num1, int num2) {
        cout << "Two integer numbers: " << num1 << " and " << num2 << endl;
    }

    // Function with a double parameter
    void display(double num) {
        cout << "Double number: " << num << endl;
    }
};

int main() {
    OverloadExample obj;
    obj.display(5); // Calls the first display function
    obj.display(10, 20); // Calls the second display function
    obj.display(3.14); // Calls the third display function

    return 0;
}
```

In this example, the `OverloadExample` class contains three `display` functions, each with a different parameter list. When calling the `display` function, the compiler determines which version of the function to call based on the arguments provided. This is an example of function overloading in C++.

###How internally function overloading works?
Internally, function overloading in C++ works through a process called name mangling and signature-based resolution. When you define multiple functions with the same name but different parameter lists, the compiler generates unique mangled names for each function based on their parameter types and order. This allows the linker to differentiate between the overloaded functions.

When a function is called, the compiler matches the function call to the appropriate mangled name based on the number and types of arguments provided. If an exact match is found, the corresponding function is called. If no exact match is found, the compiler tries to find the best match based on the available functions and their parameter types. If there is ambiguity or no suitable match, a compilation error occurs.

During the compilation process, the compiler resolves the function call to the correct mangled name based on the provided arguments, ensuring that the correct overloaded function is called at runtime.

In summary, function overloading in C++ is internally managed through name mangling and signature-based resolution, allowing the compiler to differentiate between overloaded functions and select the appropriate function to call based on the provided arguments.

Here's an example code to illustrate how function overloading works internally in C++:

In C++, the mangled name of a function is the name the compiler gives to a function to uniquely identify it based on its parameters. Here's an example to illustrate mangled names:

Consider the following C++ code:

```cpp
#include <iostream>
using namespace std;

void display(int x) {
    cout << "Displaying integer: " << x << endl;
}

void display(double x) {
    cout << "Displaying double: " << x << endl;
}

int main() {
    display(5);
    display(3.14);

    return 0;
}
```

When compiled, the mangled names for the `display` functions might look something like this:

- `display(int)` might be mangled to something like `_Z7displayi`
- `display(double)` might be mangled to something like `_Z7displayd`

These mangled names are unique identifiers generated by the compiler based on the function's name and its parameter types. They allow the linker to differentiate between the overloaded functions.

Please note that the actual mangled names can vary depending on the compiler and platform being used.

In this example, we have two overloaded `print` functions, one that takes an integer and another that takes a double as a parameter. When the `print` function is called with an integer argument, the compiler internally resolves the call to the `print(int)` function, and when it's called with a double argument, the call is resolved to the `print(double)` function.

Internally, the compiler generates unique mangled names for these functions based on their parameter types, allowing it to differentiate between the overloaded functions and select the appropriate function to call based on the provided arguments.

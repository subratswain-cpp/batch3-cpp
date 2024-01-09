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
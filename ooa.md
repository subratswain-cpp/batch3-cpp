### Object-Oriented Analysis (OOA) 
It is the process of examining a problem domain, identifying objects and their interactions, and defining the behaviour of these objects. In the context of classes and objects in C++, OOA involves identifying the classes that represent the entities in the problem domain and defining their attributes and behaviours.

Let's consider a simple example of a "Book" class to explain OOA:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book myBook; // Creating an object of the Book class
    myBook.title = "C++";
    myBook.author = "My Fav Author.";
    myBook.year = 2024;

    myBook.displayInfo(); // Calling the displayInfo method on the object

    return 0;
}
```

In this example, we have a "Book" class that represents a book entity. It has attributes such as title, author, and year. The `displayInfo` method is used to display the information about the book. In the `main` function, we create an object of the `Book` class and set its attributes. We then call the `displayInfo` method on the object to display the book information.

This example demonstrates the basic principles of OOA using classes and objects in C++. It involves identifying the class (Book) that represents an entity, defining its attributes and behaviors, and creating objects to interact with the class.

### More Examples
1. **Student Class**:
   ```cpp
   class Student {
   public:
       string name;
       int age;
       string major;

       void displayInfo() {
           cout << "Name: " << name << endl;
           cout << "Age: " << age << endl;
           cout << "Major: " << major << endl;
       }
   };

   int main() {
       Student s1;
       s1.name = "Alice";
       s1.age = 20;
       s1.major = "Computer Science";
       s1.displayInfo();
       return 0;
   }
   ```

2. **Employee Class**:
   ```cpp
   class Employee {
   public:
       string name;
       int employeeId;
       double salary;

       void displayInfo() {
           cout << "Name: " << name << endl;
           cout << "ID: " << employeeId << endl;
           cout << "Salary: " << salary << endl;
       }
   };

   int main() {
       Employee emp1;
       emp1.name = "Ansu";
       emp1.employeeId = 1001;
       emp1.salary = 5000000.0;
       emp1.displayInfo();
       return 0;
   }
   ```

3. **Product Class**:
   ```cpp
   class Product {
   public:
       string name;
       double price;
       int quantity;

       void displayInfo() {
           cout << "Product: " << name << endl;
           cout << "Price: $" << price << endl;
           cout << "Quantity: " << quantity << endl;
       }
   };

   int main() {
       Product p1;
       p1.name = "Laptop";
       p1.price = 999.99;
       p1.quantity = 10;
       p1.displayInfo();
       return 0;
   }
   ```

4. **BankAccount Class**:
   ```cpp
   class BankAccount {
   public:
       string accountHolder;
       double balance;

       void displayInfo() {
           cout << "Account Holder: " << accountHolder << endl;
           cout << "Balance: $" << balance << endl;
       }
   };

   int main() {
       BankAccount acc1;
       acc1.accountHolder = "Anasuya Nayak";
       acc1.balance = 1000000.0;
       acc1.displayInfo();
       return 0;
   }
   ```

5. **Rectangle Class**:
   ```cpp
   class Rectangle {
   public:
       double length;
       double width;

       double calculateArea() {
           return length * width;
       }
   };

   int main() {
       Rectangle rect1;
       rect1.length = 5.0;
       rect1.width = 3.0;
       cout << "Area of Rectangle: " << rect1.calculateArea() << endl;
       return 0;
   }
   ```

6. **Car Class**:
   ```cpp
   class Car {
   public:
       string make;
       string model;
       int year;

       void start() {
           cout << "Car started" << endl;
       }

       void stop() {
           cout << "Car stopped" << endl;
       }
   };

   int main() {
       Car myCar;
       myCar.make = "Toyota";
       myCar.model = "Camry";
       myCar.year = 2020;
       myCar.start();
       myCar.stop();
       return 0;
   }
   ```

7. **Circle Class**:
   ```cpp
   class Circle {
   public:
       double radius;

       double calculateArea() {
           return 3.14 * radius * radius;
       }
   };

   int main() {
       Circle c1;
       c1.radius = 5.0;
       cout << "Area of Circle: " << c1.calculateArea() << endl;
       return 0;
   }
   ```

8. **House Class**:
   ```cpp
   class House {
   public:
       string address;
       int bedrooms;
       double price;

       void displayInfo() {
           cout << "Address: " << address << endl;
           cout << "Bedrooms: " << bedrooms << endl;
           cout << "Price: $" << price << endl;
       }
   };

   int main() {
       House h1;
       h1.address = "123 Pune New St";
       h1.bedrooms = 3;
       h1.price = 250000.0;
       h1.displayInfo();
       return 0;
   }
   ```

9. **Airplane Class**:
   ```cpp
   class Airplane {
   public:
       string manufacturer;
       string model;
       int year;

       void takeOff() {
           cout << "Airplane taking off" << endl;
       }

       void land() {
           cout << "Airplane landing" << endl;
       }
   };

   int main() {
       Airplane boeing747;
       boeing747.manufacturer = "Boeing";
       boeing747.model = "747";
       boeing747.year = 2000;
       boeing747.takeOff();
       boeing747.land();
       return 0;
   }
   ```

10. **MobilePhone Class**:
   ```cpp
   class MobilePhone {
   public:
       string brand;
       string model;
       double screenSize;

       void makeCall(string number) {
           cout << "Calling " << number << endl;
       }

       void sendMessage(string recipient, string message) {
           cout << "Sending message to " << recipient << ": " << message << endl;
       }
   };

   int main() {
       MobilePhone iphone;
       iphone.brand = "Apple";
       iphone.model = "iPhone 12";
       iphone.screenSize = 6.1;
       iphone.makeCall("123-456-7890");
       iphone.sendMessage("Alice", "Hello, how are you?");
       return 0;
   }
   ```

11. **Animal Class**:
   ```cpp
   class Animal {
   public:
       string species;
       int age;
       string sound;

       void makeSound() {
           cout << "The " << species << " makes the sound: " << sound << endl;
       }
   };

   int main() {
       Animal dog;
       dog.species = "Dog";
       dog.age = 3;
       dog.sound = "Woof";
       dog.makeSound();
       return 0;
   }
   ```

12. **Bank Class**:
   ```cpp
   class Bank {
   public:
       string name;
       string location;
       double totalAssets;

       void displayInfo() {
           cout << "Bank Name: " << name << endl;
           cout << "Location: " << location << endl;
           cout << "Total Assets: $" << totalAssets << endl;
       }
   };

   int main() {
       Bank chase;
       chase.name = "ICICI Bank";
       chase.location = "New York";
       chase.totalAssets = 3000000000.0;
       chase.displayInfo();
       return 0;
   }
   ```

13. **Computer Class**:
   ```cpp
   class Computer {
   public:
       string brand;
       string model;
       string processor;

       void bootUp() {
           cout << "Computer booting up" << endl;
       }

       void shutDown() {
           cout << "Computer shutting down" << endl;
       }
   };

   int main() {
       Computer dell;
       dell.brand = "Dell";
       dell.model = "XPS 15";
       dell.processor = "Intel Core i7";
       dell.bootUp();
       dell.shutDown();
       return 0;
   }
   ```

14. **LibraryBook Class**:
   ```cpp
   class LibraryBook {
   public:
       string title;
       string author;
       int yearPublished;

       void displayInfo() {
           cout << "Title: " << title << endl;
           cout << "Author: " << author << endl;
           cout << "Year Published: " << yearPublished << endl;
       }
   };

   int main() {
       LibraryBook book;
       book.title = "To Kill a Mockingbird";
       book.author = "Harper Lee";
       book.yearPublished = 1960;
       book.displayInfo();
       return 0;
   }
   ```

15. **CoffeeMachine Class**:
   ```cpp
   class CoffeeMachine {
   public:
       string brand;
       string model;
       int cupsBrewed;

       void brewCoffee() {
           cout << "Brewing a cup of coffee" << endl;
           cupsBrewed++;
       }

       void displayCupsBrewed() {
           cout << "Total cups brewed: " << cupsBrewed << endl;
       }
   };

   int main() {
       CoffeeMachine keurig;
       keurig.brand = "Keurig";
       keurig.model = "K-Elite";
       keurig.cupsBrewed = 0;
       keurig.brewCoffee();
       keurig.brewCoffee();
       keurig.displayCupsBrewed();
       return 0;
   }
   ```

16. **BankCustomer Class**:
   ```cpp
   class BankCustomer {
   public:
       string name;
       string accountNumber;
       double balance;

       void deposit(double amount) {
           balance += amount;
       }

       void withdraw(double amount) {
           balance -= amount;
       }

       void displayBalance() {
           cout << "Current balance: $" << balance << endl;
       }
   };

   int main() {
       BankCustomer customer;
       customer.name = "Anasuya";
       customer.accountNumber = "12345";
       customer.balance = 1000000.0;
       customer.deposit(50099.0);
       customer.withdraw(20090.0);
       customer.displayBalance();
       return 0;
   }
   ```

17. **Restaurant Class**:
   ```cpp
   class Restaurant {
   public:
       string name;
       string cuisine;
       int rating;

       void displayInfo() {
           cout << "Restaurant Name: " << name << endl;
           cout << "Cuisine: " << cuisine << endl;
           cout << "Rating: " << rating << "/5" << endl;
       }
   };

   int main() {
       Restaurant italianRestaurant;
       italianRestaurant.name = "Mama Mia's";
       italianRestaurant.cuisine = "Italian";
       italianRestaurant.rating = 4;
       italianRestaurant.displayInfo();
       return 0;
   }
   ```

18. **SmartHomeDevice Class**:
   ```cpp
   class SmartHomeDevice {
   public:
       string deviceName;
       string location;
       bool isOn;

       void turnOn() {
           isOn = true;
           cout << deviceName << " turned on" << endl;
       }

       void turnOff() {
           isOn = false;
           cout << deviceName << " turned off" << endl;
       }
   };

   int main() {
       SmartHomeDevice smartLight;
       smartLight.deviceName = "Living Room Light";
       smartLight.location = "Living Room";
       smartLight.isOn = false;
       smartLight.turnOn();
       smartLight.turnOff();
       return 0;
   }
   ```

These examples demonstrate the use of classes and objects in C++ to represent various entities and their attributes and behaviours, following the principles of Object-Oriented Analysis. Each example showcases a different real-world scenario where object-oriented programming can be applied.

/*Destructor is a function which is called automatically when an object
is destroyed*/

#include <iostream>

class Foo {
private:
    int data;

public:
    Foo() : data(0) {
        std::cout << "Constructor called. Data is initialized to 0." << std::endl;
    }

    ~Foo() {
        std::cout << "Destructor called. Data is " << data << ". Cleaning up." << std::endl;
    }

    // Public member function to set the data value
    void setData(int value) {
        data = value;
    }

    // Public member function to get the data value
    int getData() const {
        return data;
    }
};

int main() {
    Foo myFoo; // Calls the constructor
    myFoo.setData(42);
    std::cout << "Data: " << myFoo.getData() << std::endl;

    // The destructor is called when myFoo goes out of scope
    return 0;
}

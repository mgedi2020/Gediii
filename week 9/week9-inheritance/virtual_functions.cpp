#include <iostream>
using namespace std;

// Base class
class Animal {
public:
// NOTE: We are NOT using the 'virtual' keyword here yet!
// THE FIX: Add the 'virtual' keyword to the base class method
virtual void speak() {
cout << "Animal makes a generic sound." << endl;
}
};

// Derived class
class Dog : public Animal {
public:



// This overrides the base class method
void speak() {
cout << "Dog barks: Woof! Woof!" << endl;
}
};

int main() {
cout << "--- Without Virtual Keyword ---" << endl;

// We create a POINTER of type Animal (Base)
Animal* myPet;

// We point it to a Dog object (Derived)
myPet = new Dog();

// We call speak().
// What do you expect to happen?
myPet->speak(); // <--- ANALYZE THIS LINE

delete myPet;
return 0;
}
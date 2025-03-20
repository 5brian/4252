#include <iostream>
using namespace std;

class A {
protected:
    int var;
public:
    A() { var = 0;}
    void increment() { var++; }
    virtual void decrement() { var--; }
    virtual void print() {cout << "var = " << var << endl;}
};

class B : public A {
protected:
    int varB;
public:
    B() { varB = 0; }
    void increment() { var += 3; }
    virtual void decrement() { var -= 3; }
    void print() {cout << "var = " << var << ", varB = " << varB << endl;}
};

int main() {
    A a;
    B b;
    A * ptr;
    ptr = &a;
    ptr -> increment();
    ptr -> print();
    ptr -> decrement();
    ptr -> print();

    ptr = &b;
    ptr -> increment();
    ptr -> print();
    ptr -> decrement();
    ptr -> print();
}

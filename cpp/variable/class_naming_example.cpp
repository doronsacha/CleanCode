#include <iostream>

using namespace std;

// Bad code
class A {
public:
    void m() {
        // Method logic
    }
};

class B : public A {
public:
    void n() {
        // Method logic
    }
};

class C : public B {
public:
    void o() {
        // Method logic
    }
};

// Good code
class Vehicle {
public:
    void move() {
        // Method logic
    }
};

class Car : public Vehicle {
public:
    void accelerate() {
        // Method logic
    }
};

class ElectricCar : public Car {
public:
    void charge() {
        // Method logic
    }
};

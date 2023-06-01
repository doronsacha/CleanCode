#include <iostream>

//Bad Code

int f(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * f(n - 1);
    }
}

void p(int l) {
    int a = 0, b = 1, next;
    std::cout << "Fibonacci Sequence:";
    while (a <= l) {
        std::cout << " " << a;
        next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
}

//Good code

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

// Function to print the Fibonacci sequence up to a given limit
void printFibonacciSequence(int limit) {
    int a = 0, b = 1, next;
    std::cout << "Fibonacci Sequence:";
    while (a <= limit) {
        std::cout << " " << a;
        next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
}


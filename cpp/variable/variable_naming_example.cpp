#include <iostream>

using namespace std;

// Bad Code
double calculate(double a, double b) {
    double c = a + b;
    double d = c * 2;
    double e = d / 3;
    return e;
}

// Good Code
double calculate_average(double first_number, double second_number) {
    double sum = first_number + second_number;
    double doubled_sum = sum * 2;
    double average = doubled_sum / 3;
    return average;
}

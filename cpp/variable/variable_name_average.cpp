#include <iostream>
#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

// Bad Code


void p(const std::vector<int>& l) {
    int a = 0;
    for (const auto& i : l) {
        a += i;
    }
    double m = static_cast<double>(a) / l.size();
    std::cout << m << std::endl;
}


// Good Code
double calculateAverage(int arr[], int size) {
    if (size == 0) {
        throw std::invalid_argument("The array is empty.");
    }

    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = sum / size;

    return average;
}

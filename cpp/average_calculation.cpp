#include <iostream>
#include <stdexcept>

using namespace std;

// Bad Code
double computeAverage(int arr[], int size) {
    // Initialize the sum to zero
    double sum = 0;

    // Iterate over each element in the array
    for (int i = 0; i < size; i++) {
        // Add the current element to the sum
        sum += arr[i];
    }

    // Compute the average by dividing the sum by the number of elements in the array
    double average = sum / size;

    // Print the average
    cout << average << endl;

    // No return statement for the average (not recommended)

    // Incorrect function signature (should return double)
    return 0;
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

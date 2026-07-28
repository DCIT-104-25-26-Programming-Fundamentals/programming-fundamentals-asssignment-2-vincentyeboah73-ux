// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

#include <vector>

// Function to calculate the sum of numbers
double calculateSum(const vector<double>& nums) {
    double sum = 0;
    for (double num : nums) {
        sum += num;
    }
    return sum;
}

// Function to calculate average
double calculateAverage(const vector<double>& nums) {
    if (nums.empty()) return 0;
    return calculateSum(nums) / nums.size();
}

// Function to find maximum value
double findMaximum(const vector<double>& nums) {
    double maxVal = nums[0];
    for (double num : nums) {
        if (num > maxVal) maxVal = num;
    }
    return maxVal;
}

// Function to find minimum value
double findMinimum(const vector<double>& nums) {
    double minVal = nums[0];
    for (double num : nums) {
        if (num < minVal) minVal = num;
    }
    return minVal;
}

int main() {
    int count;
    cout << "How many numbers? ";
    if (cin >> count && count > 0) {
        vector<double> numbers(count);
        for (int i = 0; i < count; i++) {
            cout << "Enter number " << (i + 1) << ": ";
            cin >> numbers[i];
        }

        cout << "\nResults:" << endl;
        cout << "Sum: " << calculateSum(numbers) << endl;
        cout << "Average: " << calculateAverage(numbers) << endl;
        cout << "Maximum: " << findMaximum(numbers) << endl;
        cout << "Minimum: " << findMinimum(numbers) << endl;
    }
    return 0;
}
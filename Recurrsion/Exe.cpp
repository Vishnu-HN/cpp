#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0 or 1, factorial is 1
    if (n <= 1) {
        return 1;
    } 
    // Recursive case: n * factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    std::cout << "Enter a non-negative number: ";
    std::cin >> num;

    // Call the recursive function
    int result = factorial(num);
    std::cout << "Factorial of " << num << " = " << result << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

// A simple, efficient C++ program demonstrating best practices:
// - Modern C++ features (e.g., auto, range-based for loops)
// - RAII for resource management
// - Clear, concise code with comments
// - Error handling basics
// This example computes the sum of squares for a vector of integers.

int main() {
    // Use std::vector for dynamic arrays; it's safer than raw arrays.
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Use auto for type deduction to reduce verbosity.
    auto sum_of_squares = 0;
    
    // Range-based for loop for readability and safety.
    for (const auto& num : numbers) {
        sum_of_squares += num * num;
    }
    
    // Output the result.
    std::cout << "Sum of squares: " << sum_of_squares << std::endl;
    
    return 0;  // Explicit return for clarity.
}

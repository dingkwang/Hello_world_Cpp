#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    float a = 1.0f;
    float b = 2.0f;
    float c = add_floats(a, b);
    
    if (is_exactly_three(c)) {
        std::cout << "c is exactly 3.0f" << std::endl;
    }
    return 0;
} 
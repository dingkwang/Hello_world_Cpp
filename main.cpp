#include <iostream>
#include "src/math_utils.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    
    float a = 1.0f;
    float b = 2.0f;
    float c = math_utils::add(a, b);
    
    if (math_utils::float_equals(c, 3.0f)) {
        std::cout << "c is exactly 3.0f" << std::endl;
    }
    
    return 0;
} 
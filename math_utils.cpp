#include "math_utils.h"
#include <cmath> // for std::abs

// Function to add two floats
float add_floats(float a, float b) {
    return a + b;
}

// Function to check if two floats are approximately equal
bool floats_equal(float a, float b, float epsilon) {
    return std::abs(a - b) < epsilon;
}

// Function to check if a float equals exactly 3.0
bool is_exactly_three(float value) {
    return value == 3.0f;
}
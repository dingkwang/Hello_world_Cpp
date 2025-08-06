#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Function to add two floats
float add_floats(float a, float b);

// Function to check if two floats are approximately equal
bool floats_equal(float a, float b, float epsilon = 1e-6f);

// Function to check if a float equals exactly 3.0
bool is_exactly_three(float value);

#endif // MATH_UTILS_H
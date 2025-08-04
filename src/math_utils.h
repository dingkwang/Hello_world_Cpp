#ifndef MATH_UTILS_H
#define MATH_UTILS_H

namespace math_utils {

/**
 * Adds two float values
 * @param a First float value
 * @param b Second float value
 * @return Sum of a and b
 */
float add(float a, float b);

/**
 * Checks if two float values are equal with a small tolerance
 * @param a First float value
 * @param b Second float value
 * @param tolerance Tolerance for comparison (default: 1e-6)
 * @return true if values are equal within tolerance
 */
bool float_equals(float a, float b, float tolerance = 1e-6f);

/**
 * Performs basic arithmetic operations
 * @param a First operand
 * @param b Second operand
 * @return Result of a + b
 */
float perform_arithmetic(float a, float b);

} // namespace math_utils

#endif // MATH_UTILS_H
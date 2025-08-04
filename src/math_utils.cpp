#include "math_utils.h"
#include <cmath>

namespace math_utils {

float add(float a, float b) {
    return a + b;
}

bool float_equals(float a, float b, float tolerance) {
    return std::abs(a - b) < tolerance;
}

float perform_arithmetic(float a, float b) {
    return add(a, b);
}

} // namespace math_utils
#include <gtest/gtest.h>
#include "src/math_utils.h"

using namespace math_utils;

class MathUtilsTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Setup code if needed
    }
    
    void TearDown() override {
        // Cleanup code if needed
    }
};

// Test basic addition functionality
TEST_F(MathUtilsTest, AddBasic) {
    EXPECT_EQ(add(1.0f, 2.0f), 3.0f);
    EXPECT_EQ(add(0.0f, 0.0f), 0.0f);
    EXPECT_EQ(add(-1.0f, 1.0f), 0.0f);
    EXPECT_EQ(add(3.5f, 2.5f), 6.0f);
}

// Test float comparison with tolerance
TEST_F(MathUtilsTest, FloatEquals) {
    EXPECT_TRUE(float_equals(1.0f, 1.0f));
    EXPECT_TRUE(float_equals(1.0f, 1.000001f));
    EXPECT_FALSE(float_equals(1.0f, 1.1f));
    EXPECT_TRUE(float_equals(0.0f, 0.0000001f));
}

// Test float comparison with custom tolerance
TEST_F(MathUtilsTest, FloatEqualsCustomTolerance) {
    EXPECT_TRUE(float_equals(1.0f, 1.1f, 0.2f));
    EXPECT_FALSE(float_equals(1.0f, 1.5f, 0.2f));
}

// Test arithmetic operations
TEST_F(MathUtilsTest, PerformArithmetic) {
    EXPECT_EQ(perform_arithmetic(1.0f, 2.0f), 3.0f);
    EXPECT_EQ(perform_arithmetic(0.0f, 5.0f), 5.0f);
    EXPECT_EQ(perform_arithmetic(-3.0f, 3.0f), 0.0f);
}

// Test edge cases
TEST_F(MathUtilsTest, EdgeCases) {
    // Test with very large numbers
    EXPECT_EQ(add(1e6f, 2e6f), 3e6f);
    
    // Test with very small numbers
    EXPECT_TRUE(float_equals(add(1e-6f, 2e-6f), 3e-6f));
    
    // Test with zero
    EXPECT_EQ(add(0.0f, 0.0f), 0.0f);
    EXPECT_TRUE(float_equals(0.0f, 0.0f));
}

// Test negative numbers
TEST_F(MathUtilsTest, NegativeNumbers) {
    EXPECT_EQ(add(-1.0f, -2.0f), -3.0f);
    EXPECT_TRUE(float_equals(add(-1.0f, 1.0f), 0.0f));
    EXPECT_EQ(perform_arithmetic(-5.0f, 3.0f), -2.0f);
}
#include <gtest/gtest.h>
#include "math_utils.h"

// Test fixture class for math utilities
class MathUtilsTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Setup code if needed
    }

    void TearDown() override {
        // Cleanup code if needed
    }
};

// Tests for add_floats function
TEST_F(MathUtilsTest, AddFloatsPositiveNumbers) {
    EXPECT_FLOAT_EQ(add_floats(1.0f, 2.0f), 3.0f);
    EXPECT_FLOAT_EQ(add_floats(0.5f, 0.3f), 0.8f);
}

TEST_F(MathUtilsTest, AddFloatsNegativeNumbers) {
    EXPECT_FLOAT_EQ(add_floats(-1.0f, -2.0f), -3.0f);
    EXPECT_FLOAT_EQ(add_floats(-0.5f, -0.3f), -0.8f);
}

TEST_F(MathUtilsTest, AddFloatsMixedNumbers) {
    EXPECT_FLOAT_EQ(add_floats(1.0f, -1.0f), 0.0f);
    EXPECT_FLOAT_EQ(add_floats(-2.5f, 3.5f), 1.0f);
}

TEST_F(MathUtilsTest, AddFloatsZero) {
    EXPECT_FLOAT_EQ(add_floats(0.0f, 0.0f), 0.0f);
    EXPECT_FLOAT_EQ(add_floats(5.0f, 0.0f), 5.0f);
    EXPECT_FLOAT_EQ(add_floats(0.0f, -3.0f), -3.0f);
}

// Tests for floats_equal function
TEST_F(MathUtilsTest, FloatsEqualExactMatch) {
    EXPECT_TRUE(floats_equal(1.0f, 1.0f));
    EXPECT_TRUE(floats_equal(0.0f, 0.0f));
    EXPECT_TRUE(floats_equal(-1.0f, -1.0f));
}

TEST_F(MathUtilsTest, FloatsEqualWithinDefaultEpsilon) {
    EXPECT_TRUE(floats_equal(1.0f, 1.0000001f));
    EXPECT_TRUE(floats_equal(0.0f, 0.0000001f));
}

TEST_F(MathUtilsTest, FloatsEqualWithCustomEpsilon) {
    EXPECT_TRUE(floats_equal(1.0f, 1.01f, 0.1f));
    EXPECT_FALSE(floats_equal(1.0f, 1.01f, 0.001f));
}

TEST_F(MathUtilsTest, FloatsNotEqual) {
    EXPECT_FALSE(floats_equal(1.0f, 2.0f));
    EXPECT_FALSE(floats_equal(0.0f, 1.0f));
    EXPECT_FALSE(floats_equal(-1.0f, 1.0f));
}

// Tests for is_exactly_three function
TEST_F(MathUtilsTest, IsExactlyThreeTrue) {
    EXPECT_TRUE(is_exactly_three(3.0f));
}

TEST_F(MathUtilsTest, IsExactlyThreeFalse) {
    EXPECT_FALSE(is_exactly_three(2.9999f));
    EXPECT_FALSE(is_exactly_three(3.0001f));
    EXPECT_FALSE(is_exactly_three(0.0f));
    EXPECT_FALSE(is_exactly_three(-3.0f));
}

TEST_F(MathUtilsTest, IsExactlyThreeFromAddition) {
    // Test the specific case from main function
    float result = add_floats(1.0f, 2.0f);
    EXPECT_TRUE(is_exactly_three(result));
}

// Integration test combining multiple functions
TEST_F(MathUtilsTest, IntegrationTestMainLogic) {
    float a = 1.0f;
    float b = 2.0f;
    float c = add_floats(a, b);
    
    EXPECT_TRUE(is_exactly_three(c));
    EXPECT_TRUE(floats_equal(c, 3.0f));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
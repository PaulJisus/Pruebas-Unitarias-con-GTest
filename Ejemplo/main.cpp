// calc_test.cpp
#include <gtest/gtest.h>
#include "calc.h"

TEST(CalcTest, Add) {
    ASSERT_EQ(2, add(1, 1));
    ASSERT_EQ(5, add(3, 2));
    ASSERT_EQ(10, add(7, 3));
}

TEST(CalcTest, Sub) {
    ASSERT_EQ(3, sub(5, 2));
    ASSERT_EQ(-10, sub(5, 15));
}

int main(int argc, char **argv) {
    testing::GTEST_FLAG(output) = "xml:test.xml";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

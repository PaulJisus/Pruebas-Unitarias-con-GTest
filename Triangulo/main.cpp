#include <iostream>

#include "Triangulo.h"
#include "src/Triangulo.cpp"
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char **argv)
{
    testing::GTEST_FLAG(output) = "xml:test.xml";
    testing::GTEST_FLAG(output) = "json:test.json";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

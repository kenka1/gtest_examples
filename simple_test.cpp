#include <gtest/gtest.h>

int Factorial(int n)
{
    int result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}

TEST(FactorialTest, HandleZeroInput)
{
    EXPECT_EQ(Factorial(0), 1);
}

TEST(FactorialTest, HandlePositiveInput)
{
    EXPECT_EQ(Factorial(1), 1);
    EXPECT_EQ(Factorial(2), 2);
    EXPECT_EQ(Factorial(3), 6);
    EXPECT_EQ(Factorial(8), 40320);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

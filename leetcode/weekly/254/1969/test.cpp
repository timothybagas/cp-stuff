#include <gtest/gtest.h>
#include "1969.hpp"

Solution sol;

TEST(Problem_1969, Case_1) {
  EXPECT_EQ(sol.minNonZeroProduct(1), 1);
}

TEST(Problem_1969, Case_2) {
  EXPECT_EQ(sol.minNonZeroProduct(2), 6);
}

TEST(Problem_1969, Case_3) {
  EXPECT_EQ(sol.minNonZeroProduct(3), 1512);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
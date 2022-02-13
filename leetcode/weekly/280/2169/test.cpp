#include "gtest/gtest.h"
#include "2169.hpp"

Solution sol;

TEST(Problem_2169, Case_1) {
  EXPECT_EQ(sol.countOperations(2, 3), 3);
}

TEST(Problem_2169, Case_2) {
  EXPECT_EQ(sol.countOperations(10, 10), 1);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
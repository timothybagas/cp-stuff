#include "gtest/gtest.h"
#include "2170.hpp"

Solution sol;

TEST(Problem_2170, Case_1) {
  vector<int> nums = {3,1,3,2,4,3};
  EXPECT_EQ(sol.minimumOperations(nums), 3);
}

TEST(Problem_2170, Case_2) {
  vector<int> nums = {1,2,2,2,2};
  EXPECT_EQ(sol.minimumOperations(nums), 2);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include "gtest/gtest.h"
#include "2172.hpp"

Solution sol;

TEST(Problem_2172, Case_1) {
  vector<int> nums = {1,2,3,4,5,6};
  EXPECT_EQ(sol.maximumANDSum(nums, 3), 9);
}

TEST(Problem_2172, Case_2) {
  vector<int> nums = {1,3,10,4,7,1};
  EXPECT_EQ(sol.maximumANDSum(nums, 9), 24);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "1991.hpp"

Solution sol;

TEST(Problem_1991, Case_1) {
  vector<int> nums = {2,3,-1,8,4};
  EXPECT_EQ(sol.findMiddleIndex(nums), 3);
}

TEST(Problem_1991, Case_2) {
  vector<int> nums = {1,-1,4};
  EXPECT_EQ(sol.findMiddleIndex(nums), 2);
}

TEST(Problem_1991, Case_3) {
  vector<int> nums = {2,5};
  EXPECT_EQ(sol.findMiddleIndex(nums), -1);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
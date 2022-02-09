#include <gtest/gtest.h>
#include "1968.hpp"

Solution sol;

TEST(Problem_1968, Case_1) {
  vector<int> nums = {1,2,3,4,5}, res = {1,2,4,5,3};
  EXPECT_EQ(sol.rearrangeArray(nums), res);
}

TEST(Problem_1968, Case_2) {
  vector<int> nums = {6,2,0,9,7}, res = {9,7,6,2,0};
  EXPECT_EQ(sol.rearrangeArray(nums), res);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
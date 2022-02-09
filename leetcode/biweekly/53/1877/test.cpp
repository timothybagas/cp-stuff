#include <gtest/gtest.h>
#include "1877.hpp"

Solution sol;

TEST(Problem_1877, Case_1) {
    vector<int> nums = {3,5,2,3};
    EXPECT_EQ(sol.minPairSum(nums), 7);
}

TEST(Problem_1877, Case_2) {
    vector<int> nums = {3,5,4,2,4,6};
    EXPECT_EQ(sol.minPairSum(nums), 8);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
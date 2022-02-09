#include <gtest/gtest.h>
#include "1879.hpp"

Solution sol;

TEST(Problem_1879, Case_1) {
    vector<int> nums1 = {1,2}, nums2 = {2,3};
    EXPECT_EQ(sol.minimumXORSum(nums1, nums2), 2);
}

TEST(Problem_1879, Case_2) {
    vector<int> nums1 = {1,0,3}, nums2 = {5,3,4};
    EXPECT_EQ(sol.minimumXORSum(nums1, nums2), 8);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "1876.hpp"

Solution sol;

TEST(Problem_1876, Case_1) {
    EXPECT_EQ(sol.countGoodSubstrings("xyzzaz"), 1);
}

TEST(Problem_1876, Case_2) {
    EXPECT_EQ(sol.countGoodSubstrings("aababcabc"), 4);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "2038.hpp"

Solution sol;

TEST(Problem_2038, Case_1) {
  EXPECT_TRUE(sol.winnerOfGame("AAABABB"));
}

TEST(Problem_2038, Case_2) {
  EXPECT_FALSE(sol.winnerOfGame("AA"));
}

TEST(Problem_2038, Case_3) {
  EXPECT_FALSE(sol.winnerOfGame("ABBBBBBBAAA"));
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
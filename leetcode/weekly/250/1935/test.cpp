#include <gtest/gtest.h>
#include "1935.hpp"

Solution sol;

TEST(Problem_1935, Case_1) {
  EXPECT_EQ(sol.canBeTypedWords("hello world", "ad"), 1);
}

TEST(Problem_1935, Case_2) {
  EXPECT_EQ(sol.canBeTypedWords("leet code", "lt"), 1);
}

TEST(Problem_1935, Case_3) {
  EXPECT_EQ(sol.canBeTypedWords("leet code", "e"), 0);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
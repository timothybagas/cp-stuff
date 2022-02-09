#include <gtest/gtest.h>
#include "1967.hpp"

Solution sol;

TEST(Problem_1967, Case_1) {
  vector<string> patterns = {"a","abc","bc","d"};
  EXPECT_EQ(sol.numOfStrings(patterns, "abc"), 3);
}

TEST(Problem_1967, Case_2) {
  vector<string> patterns = {"a","b","c"};
  EXPECT_EQ(sol.numOfStrings(patterns, "aaaaabbbbb"), 2);
}

TEST(Problem_1967, Case_3) {
  vector<string> patterns = {"a","a","a"};
  EXPECT_EQ(sol.numOfStrings(patterns, "ab"), 3);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "1937.hpp"

Solution sol;

TEST(Problem_1937, Case_1) {
  vector<vector<int>> points = {{1,2,3}, {1,5,1}, {3,1,1}};
  EXPECT_EQ(sol.maxPoints(points), 9);
}

TEST(Problem_1937, Case_2) {
  vector<vector<int>> points = {{1,5}, {2,3}, {4,2}};
  EXPECT_EQ(sol.maxPoints(points), 11);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
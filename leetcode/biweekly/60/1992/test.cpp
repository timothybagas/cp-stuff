#include <gtest/gtest.h>
#include "1992.hpp"

Solution sol;

TEST(Problem_1992, Case_1) {
  vector<vector<int>> land = {{1,0,0}, {0,1,1}, {0,1,1}};
  vector<vector<int>> res = {{0,0,0,0}, {1,1,2,2}};
  EXPECT_EQ(sol.findFarmland(land), res);
}

TEST(Problem_1992, Case_2) {
  vector<vector<int>> land = {{1,1}, {1,1}};
  vector<vector<int>> res = {{0,0,1,1}};
  EXPECT_EQ(sol.findFarmland(land), res);
}

TEST(Problem_1992, Case_3) {
  vector<vector<int>> land = {{0}};
  vector<vector<int>> res = {};
  EXPECT_EQ(sol.findFarmland(land), res);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
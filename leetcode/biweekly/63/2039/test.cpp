#include <gtest/gtest.h>
#include "2039.hpp"

Solution sol;

TEST(Problem_2039, Case_1) {
  vector<vector<int>> edges = {{0,1}, {1,2}};
  vector<int> patience = {0,2,1};
  EXPECT_EQ(sol.networkBecomesIdle(edges, patience), 8);
}

TEST(Problem_2039, Case_2) {
  vector<vector<int>> edges = {{0,1}, {0,2}, {1,2}};
  vector<int> patience = {0,10,10};
  EXPECT_EQ(sol.networkBecomesIdle(edges, patience), 3);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "1936.hpp"

Solution sol;

TEST(Problem_1936, Case_1) {
  vector<int> rungs = {1,3,5,10};
  int dist = 2;
  EXPECT_EQ(sol.addRungs(rungs, dist), 2);
}

TEST(Problem_1936, Case_2) {
  vector<int> rungs = {3,6,8,10};
  int dist = 3;
  EXPECT_EQ(sol.addRungs(rungs, dist), 0);
}

TEST(Problem_1936, Case_3) {
  vector<int> rungs = {3,4,6,7};
  int dist = 2;
  EXPECT_EQ(sol.addRungs(rungs, dist), 1);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
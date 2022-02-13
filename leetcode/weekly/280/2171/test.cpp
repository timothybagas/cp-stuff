#include "gtest/gtest.h"
#include "2171.hpp"

Solution sol;

TEST(Problem_2171, Case_1) {
  vector<int> beans = {4,1,6,5};
  EXPECT_EQ(sol.minimumRemoval(beans), 4);
}

TEST(Problem_2171, Case_2) {
  vector<int> beans = {2,10,3,2};
  EXPECT_EQ(sol.minimumRemoval(beans), 7);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
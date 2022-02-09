#include <gtest/gtest.h>
#include "2037.hpp"

Solution sol;

TEST(Problem_2037, Case_1) {
  vector<int> seats = {3,1,5}, students = {2,7,4};
  EXPECT_EQ(sol.minMovesToSeat(seats, students), 4);
}

TEST(Problem_2037, Case_2) {
  vector<int> seats = {4,1,5,9}, students = {1,3,2,6};
  EXPECT_EQ(sol.minMovesToSeat(seats, students), 7);
}

TEST(Problem_2037, Case_3) {
  vector<int> seats = {2,2,6,6}, students = {1,3,2,6};
  EXPECT_EQ(sol.minMovesToSeat(seats, students), 4);
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
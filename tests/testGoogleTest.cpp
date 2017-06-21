#include "gtest/gtest.h"
#include "Counter.h"

TEST(Counter, InitialState) {
    Counter counter;
    EXPECT_EQ(0, counter.getCount());
}

TEST(Counter, Increment) {
    Counter counter;
    EXPECT_EQ(1, counter.Increment());
    EXPECT_EQ(2, counter.Increment());
    EXPECT_EQ(3, counter.Increment());
}

TEST(Counter, do_some_shit) {

      EXPECT_EQ(0, 0);
}

int main(int argc, char **argv) {
      ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
}

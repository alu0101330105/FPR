#include <gtest/gtest.h>
#include "../include/FPR.cc"

TEST(Suma, Basic) {
  FPR fpr;
  EXPECT_EQ(fpr.suma(2,2), 4);
  EXPECT_EQ(fpr.suma(2,3), 5);
  EXPECT_EQ(fpr.suma(3,2), 5);
}

TEST(Suma, Zero) {
  FPR fpr;
  EXPECT_EQ(fpr.suma(0,0), 0);
  EXPECT_EQ(fpr.suma(0,1), 1);
  EXPECT_EQ(fpr.suma(1,0), 1);
}

TEST(Mult, Basic) {
  FPR fpr;
  EXPECT_EQ(fpr.mult(2,2), 4);
  EXPECT_EQ(fpr.mult(2,3), 6);
  EXPECT_EQ(fpr.mult(3,2), 6);
}

TEST(Mult, Zero) {
  FPR fpr;
  EXPECT_EQ(fpr.mult(0,0), 0);
  EXPECT_EQ(fpr.mult(0,1), 0);
  EXPECT_EQ(fpr.mult(1,0), 0);
}

TEST(Pow, Basic) {
  FPR fpr;
  EXPECT_EQ(fpr.pow(2,2), 4);
  EXPECT_EQ(fpr.pow(2,3), 8);
  EXPECT_EQ(fpr.pow(3,2), 9);
}

TEST(Pow, Zero) {
  FPR fpr;
  EXPECT_EQ(fpr.pow(0,0), 1);
  EXPECT_EQ(fpr.pow(0,1), 0);
  EXPECT_EQ(fpr.pow(1,0), 1);
}
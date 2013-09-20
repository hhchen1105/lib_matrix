#include <boost/numeric/ublas/matrix.hpp>
#include "gtest/gtest.h"
#include "invert_matrix.h"

using namespace boost::numeric;

TEST(InvertMatrixTest, ThreeByThreeMatrix) {
  ublas::matrix<float> m(3, 3);
  m(0, 0) = 1;
  m(0, 1) = 2;
  m(0, 2) = 3;
  m(1, 0) = 5;
  m(1, 1) = 1;
  m(1, 2) = 4;
  m(2, 0) = 6;
  m(2, 1) = 7;
  m(2, 2) = 1;

  ublas::matrix<float> invm(3, 3);
  invert_matrix(m, invm);
  ASSERT_FLOAT_EQ(invm(0, 0), -0.27551016);
  ASSERT_FLOAT_EQ(invm(0, 1), 0.19387756);
  ASSERT_FLOAT_EQ(invm(0, 2), 0.05102041);
  ASSERT_FLOAT_EQ(invm(1, 0), 0.19387755);
  ASSERT_FLOAT_EQ(invm(1, 1), -0.17346939);
  ASSERT_FLOAT_EQ(invm(1, 2), 0.1122449);
  ASSERT_FLOAT_EQ(invm(2, 0), 0.29591837);
  ASSERT_FLOAT_EQ(invm(2, 1), 0.05102041);
  ASSERT_FLOAT_EQ(invm(2, 2), -0.09183673);
}


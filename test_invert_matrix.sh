GTEST_DIR="$HOME/src/gtest-1.6.0"

g++ -c -lboost_serialization invert_matrix.cc
g++ -I $GTEST_DIR/include/ -c invert_matrix_test.cc
g++ -I $GTEST_DIR/include/ invert_matrix.o invert_matrix_test.o $GTEST_DIR/make/gtest_main.a -lpthread -lboost_serialization -lgflags -o invert_matrix_test
./invert_matrix_test

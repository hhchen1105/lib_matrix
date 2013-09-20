#include "invert_matrix.h"

bool invert_matrix(const ublas::matrix<float>& input, ublas::matrix<float>& inverse) {
  ublas::matrix<float> A(input);
  ublas::permutation_matrix<std::size_t> pm(A.size1());
  int res = lu_factorize(A, pm);
  if (res != 0) {
    return false;
  }

  inverse.assign(ublas::identity_matrix<float> (A.size1()));
  lu_substitute(A, pm, inverse);

  return true;
}

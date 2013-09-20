#ifndef __INVERT_MATRIX__
#define __INVERT_MATRIX__

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/lu.hpp>
using namespace boost::numeric;

bool invert_matrix(const ublas::matrix<float>& m, ublas::matrix<float>& inv_m);

#endif

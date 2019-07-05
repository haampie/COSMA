#pragma once
#include <cosma/context.hpp>
#include <cosma/interval.hpp>
#include <cosma/matrix.hpp>
#include <cosma/strategy.hpp>

#include <mpi.h>

#include <atomic>
#include <condition_variable>
#include <mutex>
#include <vector>

namespace cosma {

namespace one_sided_communicator {

template <typename Scalar>
void overlap_comm_and_comp(context &ctx,
                           MPI_Comm comm,
                           int rank,
                           const Strategy *strategy,
                           CosmaMatrix<Scalar> &matrixA,
                           CosmaMatrix<Scalar> &matrixB,
                           CosmaMatrix<Scalar> &matrixC,
                           Interval &m,
                           Interval &n,
                           Interval &k,
                           Interval &P,
                           size_t step,
                           Scalar beta);

}; // namespace one_sided_communicator

} // namespace cosma

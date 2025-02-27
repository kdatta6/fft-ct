/**
 * Transpose functions.
 *
 * @author Kaushik Datta <kdatta@isi.edu>
 * @date 2019-08-15
 */
#ifndef TRANSPOSE_THREADS_AVX_H
#define TRANSPOSE_THREADS_AVX_H

#include <stdlib.h>

void transpose_dbl_threads_avx_intr_8x8_row(const double* restrict A,
                                            double* restrict B,
                                            size_t A_rows, size_t A_cols,
                                            size_t num_thr);

void transpose_dbl_threads_avx_intr_8x8_col(const double* restrict A,
                                            double* restrict B,
                                            size_t A_rows, size_t A_cols,
                                            size_t num_thr);

#endif /* TRANSPOSE_THREADS_AVX_H */

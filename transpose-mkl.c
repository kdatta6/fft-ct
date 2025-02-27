/**
 * Transpose functions.
 *
 * @author Connor Imes <cimes@isi.edu>
 * @date 2019-07-15 
 */
#include <stdlib.h>

#include <mkl.h>

#include "transpose-mkl.h"

void transpose_flt_mkl(const float* restrict A, float* restrict B,
                       size_t A_rows, size_t A_cols)
{
    mkl_somatcopy('r', 't', A_rows, A_cols, 1, A, A_cols, B, A_rows);
}

void transpose_dbl_mkl(const double* restrict A, double* restrict B,
                       size_t A_rows, size_t A_cols)
{
    mkl_domatcopy('r', 't', A_rows, A_cols, 1, A, A_cols, B, A_rows);
}

void transpose_cmplx8_mkl(const MKL_Complex8* restrict A,
                          MKL_Complex8* restrict B,
                          size_t A_rows, size_t A_cols)
{
    static const MKL_Complex8 alpha = {
        .real = 1,
        .imag = 0,
    };
    mkl_comatcopy('r', 't', A_rows, A_cols, alpha, A, A_cols, B, A_rows);
}

void transpose_cmplx16_mkl(const MKL_Complex16* restrict A,
                           MKL_Complex16* restrict B,
                           size_t A_rows, size_t A_cols)
{
    static const MKL_Complex16 alpha = {
        .real = 1,
        .imag = 0,
    };
    mkl_zomatcopy('r', 't', A_rows, A_cols, alpha, A, A_cols, B, A_rows);
}

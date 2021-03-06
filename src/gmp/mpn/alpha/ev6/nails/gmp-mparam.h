/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2003, 2004 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

/* Generated by tuneup.c, 2004-02-07, gcc 3.3 */

#define MUL_KARATSUBA_THRESHOLD          40
#define MUL_TOOM3_THRESHOLD             236

#define SQR_BASECASE_THRESHOLD            7  /* karatsuba */
#define SQR_KARATSUBA_THRESHOLD           0  /* never sqr_basecase */
#define SQR_TOOM3_THRESHOLD             120

#define DIV_SB_PREINV_THRESHOLD       MP_SIZE_T_MAX  /* no preinv with nails */
#define DIV_DC_THRESHOLD                 48
#define POWM_THRESHOLD                  113

#define GCD_ACCEL_THRESHOLD               3
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* no preinv with nails */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* no preinv with nails */
#define MOD_1_NORM_THRESHOLD          MP_SIZE_T_MAX  /* no preinv with nails */
#define MOD_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* no preinv with nails */
#define USE_PREINV_DIVREM_1               0  /* no preinv with nails */
#define USE_PREINV_MOD_1                  0  /* no preinv with nails */
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* no preinv with nails */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             15
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_THRESHOLD              6336

#define MUL_FFT_TABLE  { 688, 1440, 3648, 6400, 25600, 0 }
#define MUL_FFT_MODF_THRESHOLD          488
#define MUL_FFT_THRESHOLD              3712

#define SQR_FFT_TABLE  { 432, 864, 3136, 6400, 25600, 0 }
#define SQR_FFT_MODF_THRESHOLD          480
#define SQR_FFT_THRESHOLD              2976

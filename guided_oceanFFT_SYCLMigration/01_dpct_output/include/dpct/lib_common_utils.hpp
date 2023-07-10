//==---- lib_common_utils.hpp ---------------------*- C++ -*----------------==//
//
// Copyright (C) Intel Corporation
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
// See https://llvm.org/LICENSE.txt for license information.
//
//===----------------------------------------------------------------------===//

#ifndef __DPCT_LIB_COMMON_UTILS_HPP__
#define __DPCT_LIB_COMMON_UTILS_HPP__

#include <sycl/sycl.hpp>
#include <oneapi/mkl.hpp>


namespace dpct {

namespace detail {

template <typename T> inline auto get_memory(T *x) {
  return x;
}

} // namespace detail

enum class library_data_t : unsigned char {
  real_float = 0,
  complex_float,
  real_double,
  complex_double,
  real_half,
  complex_half,
  real_bfloat16,
  complex_bfloat16,
  real_int4,
  complex_int4,
  real_uint4,
  complex_uint4,
  real_int8,
  complex_int8,
  real_uint8,
  complex_uint8,
  real_int16,
  complex_int16,
  real_uint16,
  complex_uint16,
  real_int32,
  complex_int32,
  real_uint32,
  complex_uint32,
  real_int64,
  complex_int64,
  real_uint64,
  complex_uint64,
  real_int8_4,
  real_int8_32,
  real_uint8_4,
  library_data_t_size
};

} // namespace dpct

#endif // __DPCT_LIB_COMMON_UTILS_HPP__

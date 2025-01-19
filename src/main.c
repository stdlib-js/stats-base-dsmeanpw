/**
* @license Apache-2.0
*
* Copyright (c) 2025 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/stats/base/dsmeanpw.h"
#include "stdlib/blas/ext/base/dssumpw.h"
#include "stdlib/blas/base/shared.h"
#include "stdlib/strided/base/stride2offset.h"

/**
* Computes the arithmetic mean of a single-precision floating-point strided array using pairwise summation with extended accumulation and returning an extended precision result.
*
* @param N        number of indexed elements
* @param X        input array
* @param strideX  stride length
* @return         output value
*/
double API_SUFFIX(stdlib_strided_dsmeanpw)( const CBLAS_INT N, const float *X, const CBLAS_INT strideX ) {
	const CBLAS_INT ox = stdlib_strided_stride2offset( N, strideX );
	return API_SUFFIX(stdlib_strided_dsmeanpw_ndarray)( N, X, strideX, ox );
}

/**
* Computes the arithmetic mean of a single-precision floating-point strided array using pairwise summation with extended accumulation and alternative indexing semantics and returning an extended precision result.
*
* @param N        number of indexed elements
* @param X        input array
* @param strideX  stride length
* @param offsetX  starting index for X
* @return         output value
*/
double API_SUFFIX(stdlib_strided_dsmeanpw_ndarray)( const CBLAS_INT N, const float *X, const CBLAS_INT strideX, const CBLAS_INT offsetX ) {
	if ( N <= 0 ) {
		return 0.0 / 0.0; // NaN
	}
	if ( N == 1 || strideX == 0 ) {
		return X[ offsetX ];
	}
	return stdlib_strided_dssumpw_ndarray( N, X, strideX, offsetX ) / (double)N;
}

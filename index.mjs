// Copyright (c) 2025 The Stdlib Authors. License is Apache-2.0: http://www.apache.org/licenses/LICENSE-2.0
/// <reference types="./index.d.ts" />
import e from"https://cdn.jsdelivr.net/gh/stdlib-js/utils-define-nonenumerable-read-only-property@esm/index.mjs";import s from"https://cdn.jsdelivr.net/gh/stdlib-js/strided-base-stride2offset@esm/index.mjs";import{ndarray as t}from"https://cdn.jsdelivr.net/gh/stdlib-js/blas-ext-base-dssumpw@esm/index.mjs";function r(e,s,r,n){return e<=0?NaN:1===e||0===r?s[n]:t(e,s,r,n)/e}function n(e,t,n){return r(e,t,n,s(e,n))}e(n,"ndarray",r);export{n as default,r as ndarray};
//# sourceMappingURL=index.mjs.map

// Copyright (c) 2022 The Stdlib Authors. License is Apache-2.0: http://www.apache.org/licenses/LICENSE-2.0
/// <reference types="./index.d.ts" />
import e from"https://cdn.jsdelivr.net/gh/stdlib-js/utils-define-nonenumerable-read-only-property@esm/index.mjs";import n,{ndarray as r}from"https://cdn.jsdelivr.net/gh/stdlib-js/blas-ext-base-dssumpw@esm/index.mjs";function s(e,r,s){return e<=0?NaN:1===e||0===s?r[0]:n(e,r,s)/e}function t(e,n,s,t){return e<=0?NaN:1===e||0===s?n[t]:r(e,n,s,t)/e}e(s,"ndarray",t);export{s as default,t as ndarray};
//# sourceMappingURL=index.mjs.map
/* This file was automatically generated by CasADi 3.6.5.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_densify CASADI_PREFIX(densify)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_fill CASADI_PREFIX(fill)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_s7 CASADI_PREFIX(s7)
#define casadi_s8 CASADI_PREFIX(s8)
#define casadi_s9 CASADI_PREFIX(s9)
#define casadi_sq CASADI_PREFIX(sq)
#define casadi_trans CASADI_PREFIX(trans)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

void casadi_clear(casadi_real* x, casadi_int n) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = 0;
  }
}

#define CASADI_CAST(x,y) ((x) y)

void casadi_densify(const casadi_real* x, const casadi_int* sp_x, casadi_real* y, casadi_int tr) {
  casadi_int nrow_x, ncol_x, i, el;
  const casadi_int *colind_x, *row_x;
  if (!y) return;
  nrow_x = sp_x[0]; ncol_x = sp_x[1];
  colind_x = sp_x+2; row_x = sp_x+ncol_x+3;
  casadi_clear(y, nrow_x*ncol_x);
  if (!x) return;
  if (tr) {
    for (i=0; i<ncol_x; ++i) {
      for (el=colind_x[i]; el!=colind_x[i+1]; ++el) {
        y[i + row_x[el]*ncol_x] = CASADI_CAST(casadi_real, *x++);
      }
    }
  } else {
    for (i=0; i<ncol_x; ++i) {
      for (el=colind_x[i]; el!=colind_x[i+1]; ++el) {
        y[row_x[el]] = CASADI_CAST(casadi_real, *x++);
      }
      y += nrow_x;
    }
  }
}

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

void casadi_fill(casadi_real* x, casadi_int n, casadi_real alpha) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = alpha;
  }
}

void casadi_trans(const casadi_real* x, const casadi_int* sp_x, casadi_real* y,
    const casadi_int* sp_y, casadi_int* tmp) {
  casadi_int ncol_x, nnz_x, ncol_y, k;
  const casadi_int* row_x, *colind_y;
  ncol_x = sp_x[1];
  nnz_x = sp_x[2 + ncol_x];
  row_x = sp_x + 2 + ncol_x+1;
  ncol_y = sp_y[1];
  colind_y = sp_y+2;
  for (k=0; k<ncol_y; ++k) tmp[k] = colind_y[k];
  for (k=0; k<nnz_x; ++k) {
    y[tmp[row_x[k]]++] = x[k];
  }
}

static const casadi_int casadi_s0[10] = {10, 1, 0, 6, 0, 1, 2, 3, 4, 9};
static const casadi_int casadi_s1[6] = {0, 1, 2, 3, 5, 4};
static const casadi_int casadi_s2[6] = {0, 1, 2, 3, 5, 6};
static const casadi_int casadi_s3[21] = {10, 10, 0, 1, 2, 3, 5, 6, 6, 6, 6, 6, 8, 0, 1, 2, 3, 9, 4, 3, 9};
static const casadi_int casadi_s4[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s5[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s6[3] = {0, 0, 0};
static const casadi_int casadi_s7[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s8[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s9[13] = {0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

/* Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess:(i0[7],i1[3],i2[],i3[])->(o0,o1[10],o2[10x10,8nz],o3[],o4[0x10]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real *rr, *ss;
  const casadi_int *cii;
  casadi_real w0, w1, w2, w3, w4, w5, w6, w7, w8, w13, *w14=w+10, *w15=w+16, *w16=w+26, *w17=w+34, *w18=w+43, *w23=w+49, *w24=w+51, *w25=w+53;
  /* #0: @0 = 5 */
  w0 = 5.;
  /* #1: @1 = input[0][0] */
  w1 = arg[0] ? arg[0][0] : 0;
  /* #2: @2 = input[0][6] */
  w2 = arg[0] ? arg[0][6] : 0;
  /* #3: @1 = (@1-@2) */
  w1 -= w2;
  /* #4: @2 = sq(@1) */
  w2 = casadi_sq( w1 );
  /* #5: @0 = (@0*@2) */
  w0 *= w2;
  /* #6: @2 = input[0][1] */
  w2 = arg[0] ? arg[0][1] : 0;
  /* #7: @3 = sq(@2) */
  w3 = casadi_sq( w2 );
  /* #8: @0 = (@0+@3) */
  w0 += w3;
  /* #9: @3 = 0.5 */
  w3 = 5.0000000000000000e-01;
  /* #10: @4 = input[1][2] */
  w4 = arg[1] ? arg[1][2] : 0;
  /* #11: @3 = (@3*@4) */
  w3 *= w4;
  /* #12: @0 = (@0-@3) */
  w0 -= w3;
  /* #13: @3 = 0.1 */
  w3 = 1.0000000000000001e-01;
  /* #14: @5 = input[1][0] */
  w5 = arg[1] ? arg[1][0] : 0;
  /* #15: @6 = sq(@5) */
  w6 = casadi_sq( w5 );
  /* #16: @3 = (@3*@6) */
  w3 *= w6;
  /* #17: @0 = (@0+@3) */
  w0 += w3;
  /* #18: @3 = 0.01 */
  w3 = 1.0000000000000000e-02;
  /* #19: @6 = input[1][1] */
  w6 = arg[1] ? arg[1][1] : 0;
  /* #20: @7 = sq(@6) */
  w7 = casadi_sq( w6 );
  /* #21: @3 = (@3*@7) */
  w3 *= w7;
  /* #22: @0 = (@0+@3) */
  w0 += w3;
  /* #23: @3 = 0.01 */
  w3 = 1.0000000000000000e-02;
  /* #24: @7 = sq(@4) */
  w7 = casadi_sq( w4 );
  /* #25: @3 = (@3*@7) */
  w3 *= w7;
  /* #26: @0 = (@0+@3) */
  w0 += w3;
  /* #27: output[0][0] = @0 */
  if (res[0]) res[0][0] = w0;
  /* #28: @0 = 0.1 */
  w0 = 1.0000000000000001e-01;
  /* #29: @5 = (2.*@5) */
  w5 = (2.* w5 );
  /* #30: @5 = (@0*@5) */
  w5  = (w0*w5);
  /* #31: @3 = 0.01 */
  w3 = 1.0000000000000000e-02;
  /* #32: @6 = (2.*@6) */
  w6 = (2.* w6 );
  /* #33: @6 = (@3*@6) */
  w6  = (w3*w6);
  /* #34: @7 = -0.5 */
  w7 = -5.0000000000000000e-01;
  /* #35: @8 = 0.01 */
  w8 = 1.0000000000000000e-02;
  /* #36: @4 = (2.*@4) */
  w4 = (2.* w4 );
  /* #37: @4 = (@8*@4) */
  w4  = (w8*w4);
  /* #38: @7 = (@7+@4) */
  w7 += w4;
  /* #39: @4 = 5 */
  w4 = 5.;
  /* #40: @1 = (2.*@1) */
  w1 = (2.* w1 );
  /* #41: @1 = (@4*@1) */
  w1  = (w4*w1);
  /* #42: @2 = (2.*@2) */
  w2 = (2.* w2 );
  /* #43: @9 = 00 */
  /* #44: @10 = 00 */
  /* #45: @11 = 00 */
  /* #46: @12 = 00 */
  /* #47: @13 = (-@1) */
  w13 = (- w1 );
  /* #48: @14 = vertcat(@5, @6, @7, @1, @2, @9, @10, @11, @12, @13) */
  rr=w14;
  *rr++ = w5;
  *rr++ = w6;
  *rr++ = w7;
  *rr++ = w1;
  *rr++ = w2;
  *rr++ = w13;
  /* #49: @15 = dense(@14) */
  casadi_densify(w14, casadi_s0, w15, 0);
  /* #50: output[1][0] = @15 */
  casadi_copy(w15, 10, res[1]);
  /* #51: @16 = zeros(10x10,8nz) */
  casadi_clear(w16, 8);
  /* #52: @17 = ones(10x1,9nz) */
  casadi_fill(w17, 9, 1.);
  /* #53: {@5, @6, @7, @1, @2, NULL, NULL, NULL, NULL, NULL} = vertsplit(@17) */
  w5 = w17[0];
  w6 = w17[1];
  w7 = w17[2];
  w1 = w17[3];
  w2 = w17[4];
  /* #54: @5 = (2.*@5) */
  w5 = (2.* w5 );
  /* #55: @0 = (@0*@5) */
  w0 *= w5;
  /* #56: @6 = (2.*@6) */
  w6 = (2.* w6 );
  /* #57: @3 = (@3*@6) */
  w3 *= w6;
  /* #58: @7 = (2.*@7) */
  w7 = (2.* w7 );
  /* #59: @8 = (@8*@7) */
  w8 *= w7;
  /* #60: @1 = (2.*@1) */
  w1 = (2.* w1 );
  /* #61: @1 = (@4*@1) */
  w1  = (w4*w1);
  /* #62: @2 = (2.*@2) */
  w2 = (2.* w2 );
  /* #63: @9 = 00 */
  /* #64: @10 = 00 */
  /* #65: @11 = 00 */
  /* #66: @12 = 00 */
  /* #67: @7 = (-@1) */
  w7 = (- w1 );
  /* #68: @14 = vertcat(@0, @3, @8, @1, @2, @9, @10, @11, @12, @7) */
  rr=w14;
  *rr++ = w0;
  *rr++ = w3;
  *rr++ = w8;
  *rr++ = w1;
  *rr++ = w2;
  *rr++ = w7;
  /* #69: @18 = @14[:6] */
  for (rr=w18, ss=w14+0; ss!=w14+6; ss+=1) *rr++ = *ss;
  /* #70: (@16[0, 1, 2, 3, 5, 4] = @18) */
  for (cii=casadi_s1, rr=w16, ss=w18; cii!=casadi_s1+6; ++cii, ++ss) rr[*cii] = *ss;
  /* #71: @18 = @14[:6] */
  for (rr=w18, ss=w14+0; ss!=w14+6; ss+=1) *rr++ = *ss;
  /* #72: (@16[0, 1, 2, 3, 5, 6] = @18) */
  for (cii=casadi_s2, rr=w16, ss=w18; cii!=casadi_s2+6; ++cii, ++ss) rr[*cii] = *ss;
  /* #73: @9 = 00 */
  /* #74: @10 = 00 */
  /* #75: @11 = 00 */
  /* #76: @0 = ones(10x1,1nz) */
  w0 = 1.;
  /* #77: {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, @3} = vertsplit(@0) */
  w3 = w0;
  /* #78: @3 = (-@3) */
  w3 = (- w3 );
  /* #79: @3 = (2.*@3) */
  w3 = (2.* w3 );
  /* #80: @4 = (@4*@3) */
  w4 *= w3;
  /* #81: @12 = 00 */
  /* #82: @19 = 00 */
  /* #83: @20 = 00 */
  /* #84: @21 = 00 */
  /* #85: @22 = 00 */
  /* #86: @3 = (-@4) */
  w3 = (- w4 );
  /* #87: @23 = vertcat(@9, @10, @11, @4, @12, @19, @20, @21, @22, @3) */
  rr=w23;
  *rr++ = w4;
  *rr++ = w3;
  /* #88: @24 = @23[:2] */
  for (rr=w24, ss=w23+0; ss!=w23+2; ss+=1) *rr++ = *ss;
  /* #89: (@16[6:8] = @24) */
  for (rr=w16+6, ss=w24; rr!=w16+8; rr+=1) *rr = *ss++;
  /* #90: @24 = @23[:2] */
  for (rr=w24, ss=w23+0; ss!=w23+2; ss+=1) *rr++ = *ss;
  /* #91: (@16[4:10:3] = @24) */
  for (rr=w16+4, ss=w24; rr!=w16+10; rr+=3) *rr = *ss++;
  /* #92: @25 = @16' */
  casadi_trans(w16,casadi_s3, w25, casadi_s3, iw);
  /* #93: output[2][0] = @25 */
  casadi_copy(w25, 8, res[2]);
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_n_out(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_real Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    case 4: return "o4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s5;
    case 2: return casadi_s6;
    case 3: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s7;
    case 1: return casadi_s8;
    case 2: return casadi_s3;
    case 3: return casadi_s6;
    case 4: return casadi_s9;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 14;
  if (sz_res) *sz_res = 15;
  if (sz_iw) *sz_iw = 11;
  if (sz_w) *sz_w = 61;
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_hess_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 14*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 15*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 11*sizeof(casadi_int);
  if (sz_w) *sz_w = 61*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

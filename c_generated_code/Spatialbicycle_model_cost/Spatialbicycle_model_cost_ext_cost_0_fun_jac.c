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
  #define CASADI_PREFIX(ID) Spatialbicycle_model_cost_ext_cost_0_fun_jac_ ## ID
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
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_sq CASADI_PREFIX(sq)

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

static const casadi_int casadi_s0[10] = {10, 1, 0, 6, 0, 1, 2, 3, 4, 9};
static const casadi_int casadi_s1[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s2[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s3[3] = {0, 0, 0};
static const casadi_int casadi_s4[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s5[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* Spatialbicycle_model_cost_ext_cost_0_fun_jac:(i0[7],i1[3],i2[],i3[])->(o0,o1[10]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real *rr;
  casadi_real w0, w1, w2, w3, w4, w5, w6, w7, *w12=w+8, *w13=w+14;
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
  /* #30: @0 = (@0*@5) */
  w0 *= w5;
  /* #31: @5 = 0.01 */
  w5 = 1.0000000000000000e-02;
  /* #32: @6 = (2.*@6) */
  w6 = (2.* w6 );
  /* #33: @5 = (@5*@6) */
  w5 *= w6;
  /* #34: @6 = -0.5 */
  w6 = -5.0000000000000000e-01;
  /* #35: @3 = 0.01 */
  w3 = 1.0000000000000000e-02;
  /* #36: @4 = (2.*@4) */
  w4 = (2.* w4 );
  /* #37: @3 = (@3*@4) */
  w3 *= w4;
  /* #38: @6 = (@6+@3) */
  w6 += w3;
  /* #39: @3 = 5 */
  w3 = 5.;
  /* #40: @1 = (2.*@1) */
  w1 = (2.* w1 );
  /* #41: @3 = (@3*@1) */
  w3 *= w1;
  /* #42: @2 = (2.*@2) */
  w2 = (2.* w2 );
  /* #43: @8 = 00 */
  /* #44: @9 = 00 */
  /* #45: @10 = 00 */
  /* #46: @11 = 00 */
  /* #47: @1 = (-@3) */
  w1 = (- w3 );
  /* #48: @12 = vertcat(@0, @5, @6, @3, @2, @8, @9, @10, @11, @1) */
  rr=w12;
  *rr++ = w0;
  *rr++ = w5;
  *rr++ = w6;
  *rr++ = w3;
  *rr++ = w2;
  *rr++ = w1;
  /* #49: @13 = dense(@12) */
  casadi_densify(w12, casadi_s0, w13, 0);
  /* #50: output[1][0] = @13 */
  casadi_copy(w13, 10, res[1]);
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_incref(void) {
}

CASADI_SYMBOL_EXPORT void Spatialbicycle_model_cost_ext_cost_0_fun_jac_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Spatialbicycle_model_cost_ext_cost_0_fun_jac_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int Spatialbicycle_model_cost_ext_cost_0_fun_jac_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real Spatialbicycle_model_cost_ext_cost_0_fun_jac_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Spatialbicycle_model_cost_ext_cost_0_fun_jac_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Spatialbicycle_model_cost_ext_cost_0_fun_jac_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Spatialbicycle_model_cost_ext_cost_0_fun_jac_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s2;
    case 2: return casadi_s3;
    case 3: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Spatialbicycle_model_cost_ext_cost_0_fun_jac_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 14;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 24;
  return 0;
}

CASADI_SYMBOL_EXPORT int Spatialbicycle_model_cost_ext_cost_0_fun_jac_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 14*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 3*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 24*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// identityL
List identityL(const List& L, const NumericVector& p);
RcppExport SEXP _hyper2_identityL(SEXP LSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(identityL(L, p));
    return rcpp_result_gen;
END_RCPP
}
// addL
List addL(const List L1, const NumericVector p1, const List L2, const NumericVector p2);
RcppExport SEXP _hyper2_addL(SEXP L1SEXP, SEXP p1SEXP, SEXP L2SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(addL(L1, p1, L2, p2));
    return rcpp_result_gen;
END_RCPP
}
// equality
bool equality(const List L1, const NumericVector p1, const List L2, const NumericVector p2);
RcppExport SEXP _hyper2_equality(SEXP L1SEXP, SEXP p1SEXP, SEXP L2SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(equality(L1, p1, L2, p2));
    return rcpp_result_gen;
END_RCPP
}
// accessor
List accessor(const List L, const NumericVector powers, const List Lwanted);
RcppExport SEXP _hyper2_accessor(SEXP LSEXP, SEXP powersSEXP, SEXP LwantedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const List >::type Lwanted(LwantedSEXP);
    rcpp_result_gen = Rcpp::wrap(accessor(L, powers, Lwanted));
    return rcpp_result_gen;
END_RCPP
}
// overwrite
List overwrite(const List L1, const NumericVector powers1, const List L2, const NumericVector powers2);
RcppExport SEXP _hyper2_overwrite(SEXP L1SEXP, SEXP powers1SEXP, SEXP L2SEXP, SEXP powers2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers1(powers1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers2(powers2SEXP);
    rcpp_result_gen = Rcpp::wrap(overwrite(L1, powers1, L2, powers2));
    return rcpp_result_gen;
END_RCPP
}
// assigner
List assigner(const List L, const NumericVector p, const List L2, const NumericVector value);
RcppExport SEXP _hyper2_assigner(SEXP LSEXP, SEXP pSEXP, SEXP L2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(assigner(L, p, L2, value));
    return rcpp_result_gen;
END_RCPP
}
// evaluate
double evaluate(const List L, const NumericVector powers, const NumericVector probs);
RcppExport SEXP _hyper2_evaluate(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate(L, powers, probs));
    return rcpp_result_gen;
END_RCPP
}
// hessian_lowlevel
List hessian_lowlevel(const List L, const NumericVector powers, const NumericVector probs, const int n);
RcppExport SEXP _hyper2_hessian_lowlevel(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_lowlevel(L, powers, probs, n));
    return rcpp_result_gen;
END_RCPP
}
// differentiate
List differentiate(const List L, const NumericVector powers, const NumericVector probs, const unsigned int n);
RcppExport SEXP _hyper2_differentiate(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(differentiate(L, powers, probs, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hyper2_identityL", (DL_FUNC) &_hyper2_identityL, 2},
    {"_hyper2_addL", (DL_FUNC) &_hyper2_addL, 4},
    {"_hyper2_equality", (DL_FUNC) &_hyper2_equality, 4},
    {"_hyper2_accessor", (DL_FUNC) &_hyper2_accessor, 3},
    {"_hyper2_overwrite", (DL_FUNC) &_hyper2_overwrite, 4},
    {"_hyper2_assigner", (DL_FUNC) &_hyper2_assigner, 4},
    {"_hyper2_evaluate", (DL_FUNC) &_hyper2_evaluate, 3},
    {"_hyper2_hessian_lowlevel", (DL_FUNC) &_hyper2_hessian_lowlevel, 4},
    {"_hyper2_differentiate", (DL_FUNC) &_hyper2_differentiate, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_hyper2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

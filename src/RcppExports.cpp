// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

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
double evaluate(const List& L, const NumericVector& powers, const NumericVector& probs, const CharacterVector& pnames);
RcppExport SEXP _hyper2_evaluate(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP pnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type pnames(pnamesSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate(L, powers, probs, pnames));
    return rcpp_result_gen;
END_RCPP
}
// hessian_lowlevel
List hessian_lowlevel(const List& L, const NumericVector& powers, const NumericVector& probs, const CharacterVector& pnames, const NumericVector& n);
RcppExport SEXP _hyper2_hessian_lowlevel(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP pnamesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type pnames(pnamesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_lowlevel(L, powers, probs, pnames, n));
    return rcpp_result_gen;
END_RCPP
}
// differentiate
List differentiate(const List& L, const NumericVector& powers, const NumericVector& probs, const CharacterVector& pnames, const NumericVector& n);
RcppExport SEXP _hyper2_differentiate(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP pnamesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type pnames(pnamesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(differentiate(L, powers, probs, pnames, n));
    return rcpp_result_gen;
END_RCPP
}
// differentiate_n
List differentiate_n(const List& L, const NumericVector& powers, const NumericVector& probs, const CharacterVector& pnames, const NumericVector& n);
RcppExport SEXP _hyper2_differentiate_n(SEXP LSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP pnamesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type pnames(pnamesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(differentiate_n(L, powers, probs, pnames, n));
    return rcpp_result_gen;
END_RCPP
}
// identityL3
List identityL3(const List& L, const List& W, const NumericVector& p);
RcppExport SEXP _hyper2_identityL3(SEXP LSEXP, SEXP WSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const List& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(identityL3(L, W, p));
    return rcpp_result_gen;
END_RCPP
}
// addL3
List addL3(const List L1, const List W1, const NumericVector p1, const List L2, const List W2, const NumericVector p2);
RcppExport SEXP _hyper2_addL3(SEXP L1SEXP, SEXP W1SEXP, SEXP p1SEXP, SEXP L2SEXP, SEXP W2SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const List >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const List >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(addL3(L1, W1, p1, L2, W2, p2));
    return rcpp_result_gen;
END_RCPP
}
// equality3
bool equality3(const List L1, const List W1, const NumericVector p1, const List L2, const List W2, const NumericVector p2);
RcppExport SEXP _hyper2_equality3(SEXP L1SEXP, SEXP W1SEXP, SEXP p1SEXP, SEXP L2SEXP, SEXP W2SEXP, SEXP p2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const List >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const List >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p2(p2SEXP);
    rcpp_result_gen = Rcpp::wrap(equality3(L1, W1, p1, L2, W2, p2));
    return rcpp_result_gen;
END_RCPP
}
// accessor
List accessor(const List L, const List W, const NumericVector powers, const List Lwanted, const List Wwanted);
RcppExport SEXP _hyper2_accessor(SEXP LSEXP, SEXP WSEXP, SEXP powersSEXP, SEXP LwantedSEXP, SEXP WwantedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const List >::type W(WSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const List >::type Lwanted(LwantedSEXP);
    Rcpp::traits::input_parameter< const List >::type Wwanted(WwantedSEXP);
    rcpp_result_gen = Rcpp::wrap(accessor(L, W, powers, Lwanted, Wwanted));
    return rcpp_result_gen;
END_RCPP
}
// overwrite3
List overwrite3(const List L1, const List W1, const NumericVector powers1, const List L2, const List W2, const NumericVector powers2);
RcppExport SEXP _hyper2_overwrite3(SEXP L1SEXP, SEXP W1SEXP, SEXP powers1SEXP, SEXP L2SEXP, SEXP W2SEXP, SEXP powers2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< const List >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers1(powers1SEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const List >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type powers2(powers2SEXP);
    rcpp_result_gen = Rcpp::wrap(overwrite3(L1, W1, powers1, L2, W2, powers2));
    return rcpp_result_gen;
END_RCPP
}
// assigner3
List assigner3(const List L, const List W, const NumericVector p, const List L2, const List W2, const NumericVector value);
RcppExport SEXP _hyper2_assigner3(SEXP LSEXP, SEXP WSEXP, SEXP pSEXP, SEXP L2SEXP, SEXP W2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const List >::type W(WSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const List >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< const List >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(assigner3(L, W, p, L2, W2, value));
    return rcpp_result_gen;
END_RCPP
}
// evaluate3
double evaluate3(const List& L, const List& W, const NumericVector& powers, const NumericVector& probs, const CharacterVector& pnames);
RcppExport SEXP _hyper2_evaluate3(SEXP LSEXP, SEXP WSEXP, SEXP powersSEXP, SEXP probsSEXP, SEXP pnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const List& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type powers(powersSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type pnames(pnamesSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate3(L, W, powers, probs, pnames));
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
    {"_hyper2_evaluate", (DL_FUNC) &_hyper2_evaluate, 4},
    {"_hyper2_hessian_lowlevel", (DL_FUNC) &_hyper2_hessian_lowlevel, 5},
    {"_hyper2_differentiate", (DL_FUNC) &_hyper2_differentiate, 5},
    {"_hyper2_differentiate_n", (DL_FUNC) &_hyper2_differentiate_n, 5},
    {"_hyper2_identityL3", (DL_FUNC) &_hyper2_identityL3, 3},
    {"_hyper2_addL3", (DL_FUNC) &_hyper2_addL3, 6},
    {"_hyper2_equality3", (DL_FUNC) &_hyper2_equality3, 6},
    {"_hyper2_accessor", (DL_FUNC) &_hyper2_accessor, 5},
    {"_hyper2_overwrite3", (DL_FUNC) &_hyper2_overwrite3, 6},
    {"_hyper2_assigner3", (DL_FUNC) &_hyper2_assigner3, 6},
    {"_hyper2_evaluate3", (DL_FUNC) &_hyper2_evaluate3, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_hyper2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

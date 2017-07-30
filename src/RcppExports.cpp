// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mat2seqint
List mat2seqint(NumericMatrix mat);
RcppExport SEXP _EloRating_mat2seqint(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(mat2seqint(mat));
    return rcpp_result_gen;
END_RCPP
}
// steepint
NumericVector steepint(NumericMatrix mat, IntegerVector nrand, bool Dij);
RcppExport SEXP _EloRating_steepint(SEXP matSEXP, SEXP nrandSEXP, SEXP DijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nrand(nrandSEXP);
    Rcpp::traits::input_parameter< bool >::type Dij(DijSEXP);
    rcpp_result_gen = Rcpp::wrap(steepint(mat, nrand, Dij));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EloRating_mat2seqint", (DL_FUNC) &_EloRating_mat2seqint, 1},
    {"_EloRating_steepint", (DL_FUNC) &_EloRating_steepint, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_EloRating(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

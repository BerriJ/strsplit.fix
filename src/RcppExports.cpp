// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// lexicalCast
std::vector<double> lexicalCast(std::vector<std::string> v);
RcppExport SEXP _strsplit_fix_num_lexicalCast(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(lexicalCast(v));
    return rcpp_result_gen;
END_RCPP
}
// strsplit_fix_num
Rcpp::List strsplit_fix_num(std::vector<std::string> v, int N);
RcppExport SEXP _strsplit_fix_num_strsplit_fix_num(SEXP vSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(strsplit_fix_num(v, N));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_strsplit_fix_num_lexicalCast", (DL_FUNC) &_strsplit_fix_num_lexicalCast, 1},
    {"_strsplit_fix_num_strsplit_fix_num", (DL_FUNC) &_strsplit_fix_num_strsplit_fix_num, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_strsplit_fix_num(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// quadraticKernel
arma::vec quadraticKernel(const arma::vec& x);
RcppExport SEXP _highfrequency_quadraticKernel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(quadraticKernel(x));
    return rcpp_result_gen;
END_RCPP
}
// tradeIntensityProcessCpp
arma::vec tradeIntensityProcessCpp(arma::vec& time, const double bandwidth);
RcppExport SEXP _highfrequency_tradeIntensityProcessCpp(SEXP timeSEXP, SEXP bandwidthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const double >::type bandwidth(bandwidthSEXP);
    rcpp_result_gen = Rcpp::wrap(tradeIntensityProcessCpp(time, bandwidth));
    return rcpp_result_gen;
END_RCPP
}
// har_agg
arma::mat har_agg(arma::vec RM, arma::vec periods, int iNperiods);
RcppExport SEXP _highfrequency_har_agg(SEXP RMSEXP, SEXP periodsSEXP, SEXP iNperiodsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type RM(RMSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type periods(periodsSEXP);
    Rcpp::traits::input_parameter< int >::type iNperiods(iNperiodsSEXP);
    rcpp_result_gen = Rcpp::wrap(har_agg(RM, periods, iNperiods));
    return rcpp_result_gen;
END_RCPP
}
// heavy_parameter_transformR_
List heavy_parameter_transformR_(NumericVector parameters, int K, IntegerVector p, IntegerVector q, NumericVector O, NumericVector A, NumericVector B, IntegerVector pMax1, IntegerVector qMax1);
RcppExport SEXP _highfrequency_heavy_parameter_transformR_(SEXP parametersSEXP, SEXP KSEXP, SEXP pSEXP, SEXP qSEXP, SEXP OSEXP, SEXP ASEXP, SEXP BSEXP, SEXP pMax1SEXP, SEXP qMax1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type O(OSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B(BSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pMax1(pMax1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type qMax1(qMax1SEXP);
    rcpp_result_gen = Rcpp::wrap(heavy_parameter_transformR_(parameters, K, p, q, O, A, B, pMax1, qMax1));
    return rcpp_result_gen;
END_RCPP
}
// heavy_parameter_transform_RetrackR_
List heavy_parameter_transform_RetrackR_(NumericVector parameters, int K, IntegerVector p, IntegerVector q, NumericVector means, NumericVector O, NumericVector A, NumericVector B, IntegerVector pMax1, IntegerVector qMax1);
RcppExport SEXP _highfrequency_heavy_parameter_transform_RetrackR_(SEXP parametersSEXP, SEXP KSEXP, SEXP pSEXP, SEXP qSEXP, SEXP meansSEXP, SEXP OSEXP, SEXP ASEXP, SEXP BSEXP, SEXP pMax1SEXP, SEXP qMax1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type means(meansSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type O(OSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B(BSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pMax1(pMax1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type qMax1(qMax1SEXP);
    rcpp_result_gen = Rcpp::wrap(heavy_parameter_transform_RetrackR_(parameters, K, p, q, means, O, A, B, pMax1, qMax1));
    return rcpp_result_gen;
END_RCPP
}
// heavy_likelihoodR_
List heavy_likelihoodR_(NumericVector h, NumericVector O, NumericVector A, NumericVector B, int TT, int K, int pMax, int qMax, NumericVector data, NumericVector backCast, NumericVector LB, NumericVector UB, NumericVector llRM, NumericVector lls);
RcppExport SEXP _highfrequency_heavy_likelihoodR_(SEXP hSEXP, SEXP OSEXP, SEXP ASEXP, SEXP BSEXP, SEXP TTSEXP, SEXP KSEXP, SEXP pMaxSEXP, SEXP qMaxSEXP, SEXP dataSEXP, SEXP backCastSEXP, SEXP LBSEXP, SEXP UBSEXP, SEXP llRMSEXP, SEXP llsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type h(hSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type O(OSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type TT(TTSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type pMax(pMaxSEXP);
    Rcpp::traits::input_parameter< int >::type qMax(qMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type backCast(backCastSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LB(LBSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type UB(UBSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type llRM(llRMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lls(llsSEXP);
    rcpp_result_gen = Rcpp::wrap(heavy_likelihoodR_(h, O, A, B, TT, K, pMax, qMax, data, backCast, LB, UB, llRM, lls));
    return rcpp_result_gen;
END_RCPP
}
// colCumsum
arma::mat colCumsum(arma::mat& x);
RcppExport SEXP _highfrequency_colCumsum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colCumsum(x));
    return rcpp_result_gen;
END_RCPP
}
// refreshTimeMathing
Rcpp::List refreshTimeMathing(const arma::mat& x, arma::vec& idx);
RcppExport SEXP _highfrequency_refreshTimeMathing(SEXP xSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(refreshTimeMathing(x, idx));
    return rcpp_result_gen;
END_RCPP
}
// preAveragingReturnsInternal
arma::mat preAveragingReturnsInternal(arma::mat& ret, const int kn);
RcppExport SEXP _highfrequency_preAveragingReturnsInternal(SEXP retSEXP, SEXP knSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type ret(retSEXP);
    Rcpp::traits::input_parameter< const int >::type kn(knSEXP);
    rcpp_result_gen = Rcpp::wrap(preAveragingReturnsInternal(ret, kn));
    return rcpp_result_gen;
END_RCPP
}
// findFirst
arma::uword findFirst(arma::vec& x, const int thresh);
RcppExport SEXP _highfrequency_findFirst(SEXP xSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(findFirst(x, thresh));
    return rcpp_result_gen;
END_RCPP
}
// overlap
bool overlap(double min1, double max1, double min2, double max2);
RcppExport SEXP _highfrequency_overlap(SEXP min1SEXP, SEXP max1SEXP, SEXP min2SEXP, SEXP max2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type min1(min1SEXP);
    Rcpp::traits::input_parameter< double >::type max1(max1SEXP);
    Rcpp::traits::input_parameter< double >::type min2(min2SEXP);
    Rcpp::traits::input_parameter< double >::type max2(max2SEXP);
    rcpp_result_gen = Rcpp::wrap(overlap(min1, max1, min2, max2));
    return rcpp_result_gen;
END_RCPP
}
// leadLagCpp
arma::vec leadLagCpp(const arma::vec& x, const arma::vec& timestampsX, const arma::vec& y, const arma::vec& timestampsY, const arma::vec lags, const bool normalize);
RcppExport SEXP _highfrequency_leadLagCpp(SEXP xSEXP, SEXP timestampsXSEXP, SEXP ySEXP, SEXP timestampsYSEXP, SEXP lagsSEXP, SEXP normalizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timestampsX(timestampsXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timestampsY(timestampsYSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type lags(lagsSEXP);
    Rcpp::traits::input_parameter< const bool >::type normalize(normalizeSEXP);
    rcpp_result_gen = Rcpp::wrap(leadLagCpp(x, timestampsX, y, timestampsY, lags, normalize));
    return rcpp_result_gen;
END_RCPP
}
// leadLagCppPAR
arma::vec leadLagCppPAR(const arma::vec& x, const arma::vec& timestampsX, const arma::vec& y, const arma::vec& timestampsY, const arma::vec lags, const bool normalize, const int iCores);
RcppExport SEXP _highfrequency_leadLagCppPAR(SEXP xSEXP, SEXP timestampsXSEXP, SEXP ySEXP, SEXP timestampsYSEXP, SEXP lagsSEXP, SEXP normalizeSEXP, SEXP iCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timestampsX(timestampsXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type timestampsY(timestampsYSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type lags(lagsSEXP);
    Rcpp::traits::input_parameter< const bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< const int >::type iCores(iCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(leadLagCppPAR(x, timestampsX, y, timestampsY, lags, normalize, iCores));
    return rcpp_result_gen;
END_RCPP
}
// nsmaller
int nsmaller(IntegerVector times, IntegerVector lengths, int start, int end, int max);
RcppExport SEXP _highfrequency_nsmaller(SEXP timesSEXP, SEXP lengthsSEXP, SEXP startSEXP, SEXP endSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(nsmaller(times, lengths, start, end, max));
    return rcpp_result_gen;
END_RCPP
}
// KK
double KK(double x, int type);
RcppExport SEXP _highfrequency_KK(SEXP xSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(KK(x, type));
    return rcpp_result_gen;
END_RCPP
}
// kernelEstimator
double kernelEstimator(NumericVector a, NumericVector b, int na, int q, int adj, NumericVector type, NumericVector ab, NumericVector ab2);
RcppExport SEXP _highfrequency_kernelEstimator(SEXP aSEXP, SEXP bSEXP, SEXP naSEXP, SEXP qSEXP, SEXP adjSEXP, SEXP typeSEXP, SEXP abSEXP, SEXP ab2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type adj(adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ab(abSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ab2(ab2SEXP);
    rcpp_result_gen = Rcpp::wrap(kernelEstimator(a, b, na, q, adj, type, ab, ab2));
    return rcpp_result_gen;
END_RCPP
}
// rv
double rv(NumericVector a, NumericVector b, int na, int period, NumericVector tmpa, NumericVector tmpb, int tmpna);
RcppExport SEXP _highfrequency_rv(SEXP aSEXP, SEXP bSEXP, SEXP naSEXP, SEXP periodSEXP, SEXP tmpaSEXP, SEXP tmpbSEXP, SEXP tmpnaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type period(periodSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmpa(tmpaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmpb(tmpbSEXP);
    Rcpp::traits::input_parameter< int >::type tmpna(tmpnaSEXP);
    rcpp_result_gen = Rcpp::wrap(rv(a, b, na, period, tmpa, tmpb, tmpna));
    return rcpp_result_gen;
END_RCPP
}
// pcovcc
NumericVector pcovcc(NumericVector a, NumericVector ap, NumericVector b, NumericVector at, NumericVector atp, NumericVector bt, int na, int nap, int nb, int period);
RcppExport SEXP _highfrequency_pcovcc(SEXP aSEXP, SEXP apSEXP, SEXP bSEXP, SEXP atSEXP, SEXP atpSEXP, SEXP btSEXP, SEXP naSEXP, SEXP napSEXP, SEXP nbSEXP, SEXP periodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ap(apSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type at(atSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type atp(atpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bt(btSEXP);
    Rcpp::traits::input_parameter< int >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type nap(napSEXP);
    Rcpp::traits::input_parameter< int >::type nb(nbSEXP);
    Rcpp::traits::input_parameter< int >::type period(periodSEXP);
    rcpp_result_gen = Rcpp::wrap(pcovcc(a, ap, b, at, atp, bt, na, nap, nb, period));
    return rcpp_result_gen;
END_RCPP
}
// vasicekModel
List vasicekModel(List model, int nObs, int nSeries, int nDays, const arma::mat& dt);
RcppExport SEXP _highfrequency_vasicekModel(SEXP modelSEXP, SEXP nObsSEXP, SEXP nSeriesSEXP, SEXP nDaysSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< int >::type nSeries(nSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type nDays(nDaysSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(vasicekModel(model, nObs, nSeries, nDays, dt));
    return rcpp_result_gen;
END_RCPP
}
// hestonModel
List hestonModel(List model, int nObs, int nSeries, int nDays, const arma::mat& dt);
RcppExport SEXP _highfrequency_hestonModel(SEXP modelSEXP, SEXP nObsSEXP, SEXP nSeriesSEXP, SEXP nDaysSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< int >::type nSeries(nSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type nDays(nDaysSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(hestonModel(model, nObs, nSeries, nDays, dt));
    return rcpp_result_gen;
END_RCPP
}
// huangTauchen
List huangTauchen(List model, int nObs, int nSeries, int nDays, const arma::mat& dt);
RcppExport SEXP _highfrequency_huangTauchen(SEXP modelSEXP, SEXP nObsSEXP, SEXP nSeriesSEXP, SEXP nDaysSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< int >::type nSeries(nSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type nDays(nDaysSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(huangTauchen(model, nObs, nSeries, nDays, dt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_highfrequency_quadraticKernel", (DL_FUNC) &_highfrequency_quadraticKernel, 1},
    {"_highfrequency_tradeIntensityProcessCpp", (DL_FUNC) &_highfrequency_tradeIntensityProcessCpp, 2},
    {"_highfrequency_har_agg", (DL_FUNC) &_highfrequency_har_agg, 3},
    {"_highfrequency_heavy_parameter_transformR_", (DL_FUNC) &_highfrequency_heavy_parameter_transformR_, 9},
    {"_highfrequency_heavy_parameter_transform_RetrackR_", (DL_FUNC) &_highfrequency_heavy_parameter_transform_RetrackR_, 10},
    {"_highfrequency_heavy_likelihoodR_", (DL_FUNC) &_highfrequency_heavy_likelihoodR_, 14},
    {"_highfrequency_colCumsum", (DL_FUNC) &_highfrequency_colCumsum, 1},
    {"_highfrequency_refreshTimeMathing", (DL_FUNC) &_highfrequency_refreshTimeMathing, 2},
    {"_highfrequency_preAveragingReturnsInternal", (DL_FUNC) &_highfrequency_preAveragingReturnsInternal, 2},
    {"_highfrequency_findFirst", (DL_FUNC) &_highfrequency_findFirst, 2},
    {"_highfrequency_overlap", (DL_FUNC) &_highfrequency_overlap, 4},
    {"_highfrequency_leadLagCpp", (DL_FUNC) &_highfrequency_leadLagCpp, 6},
    {"_highfrequency_leadLagCppPAR", (DL_FUNC) &_highfrequency_leadLagCppPAR, 7},
    {"_highfrequency_nsmaller", (DL_FUNC) &_highfrequency_nsmaller, 5},
    {"_highfrequency_KK", (DL_FUNC) &_highfrequency_KK, 2},
    {"_highfrequency_kernelEstimator", (DL_FUNC) &_highfrequency_kernelEstimator, 8},
    {"_highfrequency_rv", (DL_FUNC) &_highfrequency_rv, 7},
    {"_highfrequency_pcovcc", (DL_FUNC) &_highfrequency_pcovcc, 10},
    {"_highfrequency_vasicekModel", (DL_FUNC) &_highfrequency_vasicekModel, 5},
    {"_highfrequency_hestonModel", (DL_FUNC) &_highfrequency_hestonModel, 5},
    {"_highfrequency_huangTauchen", (DL_FUNC) &_highfrequency_huangTauchen, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_highfrequency(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

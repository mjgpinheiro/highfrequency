% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/HEAVYmodel.R
\name{predict.HEAVYmodel}
\alias{predict.HEAVYmodel}
\title{Iterative multi-step-ahead forecasting for HEAVY models}
\usage{
\method{predict}{HEAVYmodel}(object, stepsAhead = 10, ...)
}
\arguments{
\item{object}{an object of class HEAVYmodel.}

\item{stepsAhead}{the number of days iterative forecasts are calculated for (default 10).}

\item{...}{further arguments passed to or from other methods.}
}
\description{
Calculates forecasts for \eqn{h_{T+k}}, where \eqn{T} denotes the end of the estimation
period for fitting the HEAVYmodel and \eqn{k = 1, \dots, \code{stepsAhead}}.
}

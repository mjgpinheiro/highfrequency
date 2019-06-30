
# Aggregation function: FAST previous tick aggregation
#' @importFrom zoo zoo na.locf
#' @importFrom stats start end
#' @keywords internal
aggregatets <- function (ts, on = "minutes", k = 1, tz = "GMT") {
  if (on == "secs" | on == "seconds") {
    secs <- k
    tby <- paste(k, "sec", sep = " ")
  } 
  if (on == "mins" | on == "minutes") {
    secs <- 60 * k
    tby <- paste(60 * k, "sec", sep = " ")
  } 
  if (on == "hours"){
    secs <- 3600 * k
    tby <- paste(3600 * k, "sec", sep = " ")
  } 
  g <- base::seq(start(ts), end(ts), by = tby)
  rawg <- as.numeric(as.POSIXct(g, tz = tz))
  newg <- rawg + (secs - rawg%%secs)
  g    <- as.POSIXct(newg, origin = "1970-01-01", tz = tz)
  ts3 <- na.locf(merge(ts, zoo(NULL, g)))[as.POSIXct(g, tz = tz)]
  return(ts3)
} #Very fast and elegant way to do previous tick aggregation :D!

### Do a daily apply but with list as output:
#' @importFrom xts try.xts
#' @importFrom xts endpoints
#' @keywords internal
applyGetList <- function(x, FUN, cor = FALSE, align.by = NULL, align.period = NULL, makeReturns = FALSE, makePsd = NULL,...){
  on <- "days" 
  k <- 1
  x <- try.xts(x, error = FALSE)
  INDEX <- endpoints(x, on = on, k = k)
  D <- length(INDEX)-1
  result <- list()
  FUN <- match.fun(FUN)
  for(i in 1:(length(INDEX)-1)){
    if (is.null(makePsd) == TRUE) {
      result[[i]] <- FUN(x[(INDEX[i] + 1):INDEX[i + 1]], cor, align.by, align.period, makeReturns)
    } else {
      result[[i]] <- FUN(x[(INDEX[i] + 1):INDEX[i + 1]], cor, align.by, align.period, makeReturns, makePsd)
    }
    
  }
  return(result)
}

#' @keywords internal
makePsd <- function(S, method = "covariance") {
  if (method == "correlation" & !any(diag(S) <= 0) ) {
    # Fan, J., Y. Li, and K. Yu (2010). Vast volatility matrix estimation using high frequency data for portfolio selection.
    D <- matrix(diag(S)^(1/2), ncol=1)
    R <- S / (D %*% t(D))
    out <- eigen(x = R , symmetric = TRUE)
    mGamma <- t(out$vectors)
    vLambda <- out$values
    vLambda[vLambda<0] <- 0
    Apsd  <- t(mGamma)%*%diag(vLambda)%*%mGamma
    dApsd <- matrix(diag(Apsd)^(1/2),ncol=1)
    Apsd  <- Apsd/(dApsd%*%t(dApsd))
    D     <- diag( as.numeric(D)  , ncol = length(D) )
    Spos  <- D %*% Apsd %*% D
    return(Spos)
  }else{
    # Rousseeuw, P. and G. Molenberghs (1993). Transformation of non positive semidefinite correlation matrices. Communications in Statistics - Theory and Methods 22, 965-984.
    out     <- eigen(x = S , symmetric = TRUE)
    mGamma  <- t(out$vectors)
    vLambda <- out$values
    vLambda[vLambda<0] <- 0
    Apsd    <- t(mGamma) %*% diag(vLambda) %*% mGamma
  }
}

#' @importFrom xts is.xts
#' @importFrom xts ndays
#' @keywords internal
multixts <- function(x, y = NULL) { 
  if (is.null(y) == TRUE) {
    test <- is.xts(x) && (ndays(x)!=1)
    return(test)
  } else {
    test <- (is.xts(x) && (ndays(x)!=1)) || (ndays(y)!=1 && is.xts(y))
    if (test == TRUE){
      equal_dimension <- (dim(y) == dim(x))
      if (equal_dimension == FALSE) { 
        warning("Please make sure x and y have the same dimensions")
        } else {
          test <- list(TRUE, cbind(x,y))
        return(test) 
      }
    } 
  } 
} 

#' @importFrom xts is.xts
#' @importFrom xts ndays
#' @keywords internal
checkMultiDays <- function(x) { 
  
  if (is.matrix(x) != is.xts(x)) {
    return(FALSE)
  }
  
  if (is.xts(x) == FALSE) {
    stop("Please provide xts-object.")
  }
  
  if (is.xts(x) && (ndays(x)!=1)) {
    TRUE
  } else {
    FALSE
  }
} 
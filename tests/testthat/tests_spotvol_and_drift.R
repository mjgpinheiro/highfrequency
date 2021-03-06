library(highfrequency)
library(testthat)


context("spotDrift")
test_that("spotDrift",{
  price <- sampleTData[as.Date(DT) == "2018-01-03", list(DT, PRICE)]
  kerneldrift <- spotDrift(as.xts(price), method = "driftKernel", alignBy = "minutes", alignPeriod = 1)
  expect_equal(
    sum(kerneldrift$mu),
    0.2335009566
  )
  
  dat <- data.table::copy(sampleTData)
  dat[, SYMBOL := NULL]
  meandrift <- spotDrift(data = dat, alignPeriod = 1, tz = "EST")
  expect_identical(formatC(meandrift$mu[1:10], digits = 5),
    c("    NA", "    NA", "    NA", "    NA", "0.00044115", "0.00049179", "0.00060476", "0.00046592", "0.00045243", "-5.0368e-05")
  )
  
  expect_identical(
    {dat <- data.table::copy(sampleTData)
    dat[, SYMBOL := NULL]
    meandrift1 <- spotDrift(data = dat, alignPeriod = 10, alignBy =  "seconds", tz = "EST")
    formatC(meandrift1$mu[11:40], digits = 5)},
    {dat <- data.table::copy(sampleTData)
    dat[, SYMBOL := NULL]
    meandrift2 <- spotDrift(data = dat, alignPeriod = 10000, alignBy =  "milliseconds", tz = "EST")
    formatC(meandrift2$mu[11:40], digits = 5)}
  )
})


context("spotVol")
test_that("spotVol", {
  # expect_identical(
  #   formatC(as.numeric(spotVol(sampleOneMinuteData[, list(DT, PRICE = MARKET)])), digits = 3),
  #   c("0.004", "0.00373", "0.00348", "0.00325", "0.00306", "0.00288", "0.00274", "0.00262", "0.00251", "0.00241")
  # ) ## Disabled for now
  init <- list(sigma = 0.0013, sigma_mu = 0.03, sigma_h = 0.007,
               sigma_k = 0.03, phi = 0.194, rho = 0.986, mu = c(-0.12,1),
               delta_c = c(-0.6, 2, 1, -3, 1),
               delta_s = c(0.7, -3, 1.4, -2, 1.7))
  expect_identical(
    formatC(as.numeric(spotVol(sampleOneMinuteData[1:1173, list(DT, PRICE = MARKET)], method = "stochper", init = init, control = list(trace = as.integer(interactive())))$spot[1:10]), digits = 3),
    c("0.0016", "0.00161", "0.00163", "0.00164", "0.00167", "0.00169", "0.00171", "0.00174", "0.00176", "0.00178")
  )
  

})

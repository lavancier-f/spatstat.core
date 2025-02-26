#
# fii.R
#
# Class of fitted interpoint interactions
#
#
fii <- function(interaction=NULL, coefs=numeric(0),
                Vnames=character(0), IsOffset=NULL, vnameprefix="") {
  if(is.null(interaction)) 
    interaction <- Poisson()
  stopifnot(is.interact(interaction))
  if(is.poisson.interact(interaction)) {
    if(length(Vnames) > 0)
      stop("Coefficients inappropriate for Poisson process")
  }
  if(is.null(IsOffset))
    IsOffset <- rep.int(FALSE, length(Vnames))
  else {
    stopifnot(is.logical(IsOffset))
    stopifnot(length(IsOffset) == length(Vnames))
  }
  hasInf <- !identical(interaction$hasInf, FALSE)
  out <- list(interaction=interaction,
              coefs=coefs,
              Vnames=Vnames,
              IsOffset=IsOffset,
              hasInf=hasInf,
              vnameprefix=vnameprefix)
  class(out) <- c("fii", class(out))
  return(out)
}

summary.fii <- function(object, ...) {
  y <- unclass(object)
  INTERACT <- object$interaction
  coefs    <- object$coefs
  Vnames   <- object$Vnames
  IsOffset <- object$IsOffset
  vnprefix <- object$vnameprefix
  y$poisson <- is.poisson.interact(INTERACT)
  thumbnail <- NULL
  if(y$poisson) {
    thumbnail <- "Poisson()"
  } else {
    if(!is.null(interpret <- INTERACT$interpret)) {
      ## invoke auto-interpretation feature
      newstyle <- newstyle.coeff.handling(INTERACT)
      Icoefs <- if(newstyle) coefs[Vnames[!IsOffset]] else coefs
      ## strip off vname prefix used by mppm
      if(npre <- sum(nchar(vnprefix)))
        names(Icoefs) <- substring(names(Icoefs), npre+1L)
      ## auto-interpret
      sensible <- interpret(Icoefs, INTERACT)
      if(!is.null(sensible) && sum(lengths(sensible))) {
        header <- paste("Fitted", sensible$inames)
        printable <- sensible$printable
        # Try to make a thumbnail description
        param <- sensible$param
        ipar <- INTERACT$par
        if(all(lengths(param) == 1) &&
           all(lengths(ipar) == 1)) {
          allargs <- append(ipar, param)
          allargs <- lapply(allargs, signif, digits=4)
          thumbnail <- fakecallstring(INTERACT$creator, allargs)
        } 
      } else {
        # no fitted interaction parameters (e.g. Hard Core)
        header <- NULL
        printable <- NULL
        thumbnail <- paste0(INTERACT$creator, "()")
      }
    } else {
      # fallback
      sensible <- NULL
      VN <- Vnames[!IsOffset]
      if(length(VN) > 0) {
        header <- "Fitted interaction terms"
        icoef <- coefs[VN]
        printable <-  exp(unlist(icoef))
        ricoef <- lapply(icoef, signif, digits=4)
        thumbnail <- fakecallstring(INTERACT$creator, ricoef)
      } else {
        header <- NULL
        printable <- NULL
        thumbnail <- paste0(INTERACT$creator, "()")
      }
    }
    y <- append(y, list(sensible=sensible,
                        header=header,
                        printable=printable,
                        thumbnail=thumbnail))
  }
  class(y) <- c("summary.fii", class(y))
  return(y)
}

print.fii <- function(x, ...) {
  sx <- summary(x)
  do.call(print.summary.fii,
          resolve.defaults(list(x=sx, brief=TRUE), list(...)))
  return(invisible(NULL))
}

print.summary.fii <- local({

  #'  hide internal arguments
  print.summary.fii <- function(x, ...) {
    PrintIt(x, ...)
  }
  
  PrintIt <- function(x, ..., prefix="Interaction: ",
                      banner=TRUE,
                      family = waxlyrical('extras'),
                      brief = !family,
                      tiny = !waxlyrical('errors')) {
    if(tiny) {
      #' use thumbnail if available
      thumbnail <- x$thumbnail
      if(!is.null(thumbnail)) {
        splat(thumbnail)
        return(invisible(NULL))
      }
    }
    terselevel <- spatstat.options('terse')
    if(banner && !brief)
      cat(prefix)
    if(x$poisson) {
      splat("Poisson process")
      parbreak(terselevel)
    } else {
      print(x$interaction, family=family, brief=TRUE, banner=banner)
      if(!is.null(x$printable)) {
        nvalues <- length(x$printable)
        nheader <- length(x$header)
        if(nvalues == 1 || nvalues == nheader) {
          for(i in 1:nvalues) {
            hdi <- x$header[i]
            xpi <- x$printable[[i]]
            if(!is.list(xpi) && length(xpi) == 1) {
              splat(paste0(hdi, ":\t", xpi))
            } else {
              splat(paste0(hdi, ":"))
              print(xpi)
            }
          } 
        } else {
          splat(x$header)
          print(x$printable)
        } 
      }
    }
    if(!brief) {
      co <- x$coefs[x$Vnames[!x$IsOffset]]
      if(length(co) > 0) {
        parbreak(terselevel)
        splat("Relevant coefficients:")
        print(co)
      }
    }
    return(invisible(NULL))
  }

  print.summary.fii
})

parameters.fii <- function(model, ...) {
  ss <- summary(model)
  out <- append(ss$interaction$par, ss$sensible$param)
  return(out)
}

coef.summary.fii <- function(object, ...) {
  object$printable
}

reach.fii <- function(x, ..., epsilon=0) {
  inte <- x$interaction
  coeffs <- x$coefs
  Vnames <- x$Vnames

  if(is.poisson.interact(inte))
    return(0)

  # get 'irange' function from interaction object
  irange <- inte$irange

  if(is.null(irange))
    return(Inf)

  # apply 'irange' function using fitted coefficients
  if(newstyle.coeff.handling(inte))
    ir <- irange(inte, coeffs[Vnames], epsilon=epsilon)
  else 
    ir <- irange(inte, coeffs, epsilon=epsilon)
  
  if(is.na(ir))
    ir <- Inf

  return(ir)
}

plot.fii <- function(x, ...) {
  inte <- x$interaction
  if(is.poisson.interact(inte)) {
    message("Poisson interaction; nothing plotted")
    return(invisible(NULL))
  }
  plfun <- inte$plot %orifnull% inte$family$plot
  if(is.null(plfun)) 
    stop("Plotting not implemented for this type of interaction")
  plfun(x, ...)
}


fitin <- function(object) {
  UseMethod("fitin")
}

fitin.ppm <- function(object) {
  f <- object$fitin
  if(!is.null(f))
    return(f)
  ## For compatibility with older versions
  inte <- object$interaction
  if(is.null(inte)) {
    f <- fii() # Poisson
  } else {
    coefs <- coef(object)
    Vnames <- object$internal$Vnames
    IsOffset <- object$internal$IsOffset
    if(npre <- sum(nchar(object$internal$vnameprefix)))
      names(coefs) <- substring(names(coefs), npre+1L)
    # Internal names of regressor variables 
    f <- fii(inte, coefs, Vnames, IsOffset)
  }
  unitname(f) <- unitname(data.ppm(object))
  return(f)
}

as.interact.fii <- function(object) {
  verifyclass(object, "fii")
  return(object$interaction)
}

coef.fii <- function(object, ...) {
  verifyclass(object, "fii")
  return(object$coefs)
}

"coef<-.fii" <- function(object, ..., value) {
  verifyclass(object, "fii")
  check.nvector(value, length(object$coefs),
                things="coefficients",
                naok=TRUE)
  object$coefs <- value %orifnull% numeric(0)
  return(object)
}
  

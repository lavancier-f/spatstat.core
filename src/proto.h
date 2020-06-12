#include <R.h>
#include <Rinternals.h>

/*
  Prototype declarations for all native routines in spatstat.core package

  Automatically generated - do not edit! 

*/

/*
  
                  Functions invoked by .C

*/

void areadifs(double *, int *, double *, double *, int *, int *, double *); 
void areaBdif(double *, int *, double *, double *, int *, int *, double *, double *, double *, double *, double *);
void delta2area(double *, double *, double *, double *, int *, double *, double *, double *, double *, int *); 
void delta2area(double *, double *, double *, double *, int *, double *, double *, double *, double *, int *);
void digberJ(double *, double *, int *, int *, int *, double *);
void xysegint(int *, double *, double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *);
void Fclosepairs(int *, double *, double *, double *, int *, int *, int *, int *, double *, double *, double *, double *, double *, double *, double *, int *); 
void paircount(int *, double *, double *, double *, int *); 
void Fclosepairs(int *, double *, double *, double *, int *, int *, int *, int *, double *, double *, double *, double *, double *, double *, double *, int *); 
void crosscount(int *, double *, double *, int *, double *, double *, double *, int *); 
void Fcrosspairs(int *, double *, double *, int *, double *, double *, double *, int *, int *, int *, int *, double *, double *, double *, double *, double *, double *, double *, int *);
void cocoImage(int *, int *, int *); 
void cocoGraph(int *, int *, int *, int *, int *, int *);
void trigrafS(int *, int *, int *, int *, int *, int *, int *, int *, int *, int *); 
void trigraf(int *, int *, int *, int *, int *, int *, int *, int *, int *, int *); 
void Idist2dpath(int *, int *, int *, int *, int *, int *, int *);
void Gdenspt(int *, double *, double *, double *, double *); 
void Gwtdenspt(int *, double *, double *, double *, double *, double *); 
void Gwtdenspt(int *, double *, double *, double *, double *, double *); 
void denspt(int *, double *, double *, double *, double *, double *); 
void wtdenspt(int *, double *, double *, double *, double *, double *, double *); 
void wtdenspt(int *, double *, double *, double *, double *, double *, double *); 
void adenspt(int *, double *, double *, double *, double *, double *, double *); 
void awtdenspt(int *, double *, double *, double *, double *, double *, double *, double *); 
void awtdenspt(int *, double *, double *, double *, double *, double *, double *, double *); 
void crdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *); 
void wtcrdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void wtcrdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void acrdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void awtcrdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *); 
void awtcrdenspt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *);
void segdens(double *, int *, double *, double *, double *, double *, int *, double *, double *, double *);
void Ediggra(int *, double *, double *, int *, int *, double *, double *, int *, double *, double *, double *); 
void ESdiggra(int *, double *, double *, int *, int *, double *, double *, int *, double *, double *, double *, int *);
void Ediggatsti(int *, double *, double *, int *, int *, double *, double *, int *, double *, double *);
void discareapoly(int *, double *, double *, int *, double *, int *, double *, double *, double *, double *, double *, double *);
void Ddist2dpath(int *, double *, int *, double *, double *, int *, int *);
void D3pairdist(int *, double *, double *, double *, int *, double *); 
void D3pairPdist(int *, double *, double *, double *, double *, double *, double *, int *, double *); 
void nnd3D(int *, double *, double *, double *, double *, int *, double *); 
void knnd3D(int *, int *, double *, double *, double *, double *, int *, double *); 
void nnw3D(int *, double *, double *, double *, double *, int *, double *); 
void knnw3D(int *, int *, double *, double *, double *, double *, int *, double *); 
void D3crossdist(int *, double *, double *, double *, int *, double *, double *, double *, int *, double *); 
void D3crossPdist(int *, double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, int *, double *);
void Cpairdist(int *, double *, double *, int *, double *); 
void CpairPdist(int *, double *, double *, double *, double *, int *, double *); 
void Ccrossdist(int *, double *, double *, int *, double *, double *, int *, double *); 
void CcrossPdist(int *, double *, double *, int *, double *, double *, double *, double *, int *, double *);
void nndMD(int *, int *, double *, double *, double *); 
void knndMD(int *, int *, int *, double *, double *, double *); 
void nnwMD(int *, int *, double *, double *, int *, double *); 
void knnwMD(int *, int *, int *, double *, double *, int *, double *); 
void nnXwMD(int *, int *, double *, int *, double *, double *, int *, double *); 
void nnXxMD(int *, int *, double *, int *, int *, double *, int *, double *, int *, double *); 
void knnXwMD(int *, int *, double *, int *, double *, int *, double *, int *, double *); 
void knnXxMD(int *, int *, double *, int *, int *, double *, int *, int *, double *, int *, double *);
void distmapbin(double *, double *, double *, double *, int *, int *, int *, double *, double *);
void ripleybox(int *, double *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void ripleypoly(int *, double *, double *, double *, int *, double *, int *, double *, double *, double *, double *, double *); 
void rippolDebug(int *, double *, double *, double *, int *, double *, int *, double *, double *, double *, double *, double *);
void tabsumweight(int *, double *, double *, int *, double *, double *);
void exact_dt_R(double *, double *, int *, double *, double *, double *, double *, int *, int *, int *, int *, double *, int *, double *);
void ps_exact_dt_R(double *, double *, double *, double *, int *, int *, int *, int *, int *, double *, int *, int *, double *);
void fardist2grid(int *, double *, double *, int *, double *, double *, int *, double *, double *, double *); 
void fardistgrid(int *, double *, double *, int *, double *, double *, int *, double *, double *, double *);
void RcallK3(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, int *, double *, double *, double *, int *); 
void RcallG3(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, int *, double *, double *, double *, int *); 
void RcallF3(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *, int *, int *, int *); 
void RcallF3cen(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *, int *, int *, int *, int *, int *, int *); 
void RcallG3cen(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, int *, int *, int *, int *, int *, int *, int *); 
void Rcallpcf3(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, int *, double *, double *, double *, int *, double *); 
void RcallF3(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *, int *, int *, int *);
void locxprod(int *, double *, double *, int *, double *, double *, double *, int *, double *, double *);
void Efiksel(int *, double *, double *, int *, double *, double *, double *, double *, double *);
void Egeyer(int *, double *, double *, int *, int *, double *, double *, int *, double *, double *, double *);
void hasXclose(int *, double *, double *, double *, int *); 
void hasXpclose(int *, double *, double *, double *, double *, int *); 
void hasXYclose(int *, double *, double *, int *, double *, double *, double *, int *); 
void hasXYpclose(int *, double *, double *, int *, double *, double *, double *, double *, int *); 
void hasX3close(int *, double *, double *, double *, double *, int *); 
void hasX3pclose(int *, double *, double *, double *, double *, double *, int *); 
void hasXY3close(int *, double *, double *, double *, int *, double *, double *, double *, double *, int *); 
void hasXY3pclose(int *, double *, double *, double *, int *, double *, double *, double *, double *, double *, int *);
void hotrodInsul(int *, double *, double *, double *, double *, int *, double *); 
void hotrodAbsorb(int *, double *, double *, double *, double *, int *, double *);
void Cidw(double *, double *, double *, int *, double *, double *, int *, double *, double *, int *, double *, double *, double *, double *); 
void Cidw2(double *, double *, double *, int *, double *, double *, int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void idwloo(double *, double *, double *, int *, double *, double *, double *, double *); 
void idwloo2(double *, double *, double *, int *, double *, double *, double *, double *, double *, double *);
void nearestvalidpixel(int *, double *, double *, int *, int *, double *, int *, int *, int *, int *);
void locprod(int *, double *, double *, double *, int *, double *, double *); 
void locxprod(int *, double *, double *, int *, double *, double *, double *, int *, double *, double *);
void KborderI(int *, double *, double *, double *, int *, double *, int *, int *); 
void KborderD(int *, double *, double *, double *, int *, double *, double *, double *); 
void Kwborder(int *, double *, double *, double *, double *, int *, double *, double *, double *); 
void KnoneI(int *, double *, double *, int *, double *, int *); 
void KnoneD(int *, double *, double *, int *, double *, double *); 
void Kwnone(int *, double *, double *, double *, int *, double *, double *); 
void KrectWtd(double *, double *, int *, double *, double *, double *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, double *, double *); 
void KrectInt(double *, double *, int *, double *, double *, int *, double *, double *, int *, int *, int *, int *, double *, double *, int *, int *, int *); 
void KrectDbl(double *, double *, int *, double *, double *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, double *, double *);
void locpcfx(int *, double *, double *, int *, int *, double *, double *, int *, int *, double *, double *, double *); 
void locWpcfx(int *, double *, double *, int *, int *, double *, double *, int *, double *, int *, double *, double *, double *);
void mdtPOrect(double *, double *, double *, double *, int *, int *, int *, int *, int *, double *, int *, double *, int *, int *); 
void mdtPOrect(double *, double *, double *, double *, int *, int *, int *, int *, int *, double *, int *, double *, int *, int *);
void minPnnd2(int *, double *, double *, double *, double *); 
void minnnd2(int *, double *, double *, double *, double *); 
void maxPnnd2(int *, double *, double *, double *, double *); 
void maxnnd2(int *, double *, double *, double *, double *);
void nnX3Dinterface(int *, double *, double *, double *, int *, int *, double *, double *, double *, int *, int *, int *, int *, double *, int *, double *); 
void knnX3Dinterface(int *, double *, double *, double *, int *, int *, double *, double *, double *, int *, int *, int *, int *, int *, double *, int *, double *);
void nnXinterface(int *, double *, double *, int *, int *, double *, double *, int *, int *, int *, int *, double *, int *, double *); 
void knnXinterface(int *, double *, double *, int *, int *, double *, double *, int *, int *, int *, int *, int *, double *, int *, double *);
void nndistsort(int *, double *, double *, double *, double *); 
void knndsort(int *, int *, double *, double *, double *, double *); 
void nnwhichsort(int *, double *, double *, int *, double *); 
void knnwhich(int *, int *, double *, double *, int *, double *);
void nnGinterface(int *, double *, double *, int *, double *, double *, int *, double *, double *, int *, int *, double *, int *, double *); 
void knnGinterface(int *, double *, double *, int *, double *, double *, int *, double *, double *, int *, int *, int *, double *, int *, double *);
void poly2imA(int *, int *, double *, double *, int *, double *, int *);
void xypsi(int *, double *, double *, double *, double *, double *, double *, double *, int *, int *); 
void Cxypolyselfint(int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *);
void auctionbf(int *, int *, int *, double *, double *, int *, double *); 
void dwpure(int *, int *, int *, int *, int *, int *); 
void auctionbf(int *, int *, int *, double *, double *, int *, double *); 
void dwpure(int *, int *, int *, int *, int *, int *); 
void dinfty_R(int *, int *, int *); 
void dwpure(int *, int *, int *, int *, int *, int *); 
void dwpure(int *, int *, int *, int *, int *, int *);
void seg2pixI(int *, double *, double *, double *, double *, int *, int *, int *); 
void seg2pixL(int *, double *, double *, double *, double *, double *, double *, double *, int *, int *, double *); 
void seg2pixN(int *, double *, double *, double *, double *, double *, int *, int *, double *);
void xysegint(int *, double *, double *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *); 
void xysi(int *, double *, double *, double *, double *, int *, double *, double *, double *, double *, double *, int *); 
void xysiANY(int *, double *, double *, double *, double *, int *, double *, double *, double *, double *, double *, int *); 
void xysegXint(int *, double *, double *, double *, double *, double *, double *, double *, double *, double *, int *); 
void xysxi(int *, double *, double *, double *, double *, double *, int *);
void Corput(int *, int *, double *);
void raster3filter(int *, int *, double *, double *, double *);
void knownCif(char *, int *);
void scantrans(double *, double *, int *, double *, double *, double *, double *, int *, int *, double *, int *);
void Gsmoopt(int *, double *, double *, double *, int *, double *, double *); 
void Gwtsmoopt(int *, double *, double *, double *, int *, double *, double *, double *); 
void smoopt(int *, double *, double *, double *, int *, double *, double *, double *); 
void wtsmoopt(int *, double *, double *, double *, int *, double *, double *, double *, double *); 
void asmoopt(int *, double *, double *, double *, int *, double *, double *, double *); 
void awtsmoopt(int *, double *, double *, double *, int *, double *, double *, double *, double *); 
void crsmoopt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void wtcrsmoopt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *); 
void acrsmoopt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *); 
void awtcrsmoopt(int *, double *, double *, int *, double *, double *, double *, double *, double *, double *, double *);
void Ccrosspaircounts(int *, double *, double *, int *, double *, double *, double *, int *); 
void Cclosepaircounts(int *, double *, double *, double *, int *);
void uniqmapxy(int *, double *, double *, int *); 
void uniqmap2M(int *, double *, double *, int *, int *);
void anydupxy(int *, double *, double *, int *);
void poly2imI(double *, double *, int *, int *, int *, int *); 
void bdrymask(int *, int *, int *, int *); 
void discs2grid(int *, double *, double *, int *, double *, double *, int *, double *, double *, double *, int *);
/*

             Functions invoked by .Call

*/
SEXP close3pairs(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP close3IJpairs(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP close3IJDpairs(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP cross3pairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP cross3IJpairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP cross3IJDpairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP closePpair(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP Vclosepairs(SEXP, SEXP, SEXP, SEXP); 
SEXP VcloseIJpairs(SEXP, SEXP, SEXP, SEXP); 
SEXP VcloseIJDpairs(SEXP, SEXP, SEXP, SEXP); 
SEXP altVclosepairs(SEXP, SEXP, SEXP, SEXP); 
SEXP altVcloseIJpairs(SEXP, SEXP, SEXP, SEXP); 
SEXP altVcloseIJDpairs(SEXP, SEXP, SEXP, SEXP); 
SEXP Vcrosspairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP VcrossIJpairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP VcrossIJDpairs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP Vclosethresh(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP trioxgraph(SEXP, SEXP, SEXP, SEXP); SEXP triograph(SEXP, SEXP, SEXP); 
SEXP trigraph(SEXP, SEXP, SEXP); SEXP triDgraph(SEXP, SEXP, SEXP, SEXP); 
SEXP triDRgraph(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP graphVees(SEXP, SEXP, SEXP);
SEXP Cxysegint(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP CxysegXint(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP CxysegXint(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP thinjumpequal(SEXP, SEXP, SEXP);
SEXP xmethas(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP xmethas(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP PerfectStrauss(SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP PerfectHardcore(SEXP, SEXP, SEXP, SEXP); 
SEXP PerfectStraussHard(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP PerfectDiggleGratton(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP PerfectDGS(SEXP, SEXP, SEXP, SEXP); 
SEXP PerfectPenttinen(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Cwhist(SEXP, SEXP, SEXP);

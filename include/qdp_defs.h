// -*- C++ -*-
// $Id: qdp_defs.h,v 1.11 2004-04-02 11:57:21 bjoo Exp $

/*! \file
 * \brief Type definitions
 */

QDP_BEGIN_NAMESPACE(QDP);

/*! \addtogroup defs Type definitions
 *
 * User constructed types made from QDP type compositional nesting.
 * The layout is suitable for a scalar-like implementation. Namely,
 * sites are the slowest varying index.
 *
 * @{
 */

#include <qdp_config.h>
#include "qdp_precision.h"

//----------------------------------------------------------------------
//! Gamma matrices are conveniently defined for this Ns
typedef GammaType<Ns> Gamma;


// Aliases for a scalar architecture

// Fixed fermion type
typedef OLattice< PSpinVector< PColorVector< RComplex<REAL>, Nc>, 4> > LatticeDiracFermion;
typedef OLattice< PSpinVector< PColorVector< RComplex<REAL>, Nc>, 1> > LatticeStaggeredFermion;
typedef OLattice< PSpinMatrix< PColorMatrix< RComplex<REAL>, Nc>, 4> > LatticeDiracPropagator;

// Floating aliases
typedef OLattice< PScalar< PColorVector< RComplex<REAL>, Nc> > > LatticeColorVector;
typedef OLattice< PSpinVector< PScalar< RComplex<REAL> >, Ns> > LatticeSpinVector;
typedef OLattice< PScalar< PColorMatrix< RComplex<REAL>, Nc> > > LatticeColorMatrix;
typedef OLattice< PSpinMatrix< PScalar< RComplex<REAL> >, Ns> > LatticeSpinMatrix;
typedef OLattice< PSpinVector< PColorVector< RComplex<REAL>, Nc>, Ns> > LatticeFermion;
typedef OLattice< PSpinVector< PColorVector< RComplex<REAL>, Nc>, Ns>>1 > > LatticeHalfFermion;
typedef OLattice< PSpinMatrix< PColorMatrix< RComplex<REAL>, Nc>, Ns> > LatticePropagator;
typedef OLattice< PScalar< PScalar< RComplex<REAL> > > > LatticeComplex;

typedef OLattice< PScalar< PSeed < RScalar<INTEGER32> > > > LatticeSeed;
typedef OLattice< PScalar< PScalar< RScalar<INTEGER32> > > > LatticeInteger;
typedef OLattice< PScalar< PScalar< RScalar<REAL> > > > LatticeReal;
typedef OLattice< PScalar< PScalar< RScalar<DOUBLE> > > > LatticeDouble;
typedef OLattice< PScalar< PScalar< RScalar<LOGICAL> > > > LatticeBoolean;

typedef OScalar< PScalar< PColorVector< RComplex<REAL>, Nc> > > ColorVector;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL>, Nc> > > ColorMatrix;
typedef OScalar< PSpinVector< PScalar< RComplex<REAL> >, Ns> > SpinVector;
typedef OScalar< PSpinMatrix< PScalar< RComplex<REAL> >, Ns> > SpinMatrix;
typedef OScalar< PSpinVector< PColorVector< RComplex<REAL>, Nc>, 1> > StaggeredFermion;
typedef OScalar< PSpinVector< PColorVector< RComplex<REAL>, Nc>, Ns> > Fermion;
typedef OScalar< PSpinVector< PColorVector< RComplex<REAL>, Nc>, Ns>>1 > > HalfFermion;
typedef OScalar< PSpinMatrix< PColorMatrix< RComplex<REAL>, Nc>, Ns> > Propagator;
typedef OScalar< PScalar< PScalar< RComplex<REAL> > > > Complex;

typedef OScalar< PScalar< PSeed< RScalar<INTEGER32> > > > Seed;
typedef OScalar< PScalar< PScalar< RScalar<INTEGER32> > > > Integer;
typedef OScalar< PScalar< PScalar< RScalar<REAL> > > > Real;
typedef OScalar< PScalar< PScalar< RScalar<DOUBLE> > > > Double;
typedef OScalar< PScalar< PScalar< RScalar<LOGICAL> > > > Boolean;

typedef OScalar< PScalar< PColorVector< RComplex<DOUBLE>, Nc> > > DColorVector;
typedef OScalar< PScalar< PColorMatrix< RComplex<DOUBLE>, Nc> > > DColorMatrix;
typedef OScalar< PSpinVector< PScalar< RComplex<DOUBLE> >, Ns> > DSpinVector;
typedef OScalar< PSpinMatrix< PScalar< RComplex<DOUBLE> >, Ns> > DSpinMatrix;
typedef OScalar< PSpinVector< PColorVector< RComplex<DOUBLE>, Nc>, 1> > DStaggeredFermion;
typedef OScalar< PSpinVector< PColorVector< RComplex<DOUBLE>, Nc>, Ns> > DFermion;
typedef OScalar< PSpinVector< PColorVector< RComplex<DOUBLE>, Nc>, Ns>>1 > > DHalfFermion;
typedef OScalar< PSpinMatrix< PColorMatrix< RComplex<DOUBLE>, Nc>, Ns> > DPropagator;
typedef OScalar< PScalar< PScalar< RComplex<DOUBLE> > > > DComplex;

// Other useful names
typedef OScalar< PSpinVector< PColorVector< RComplex<REAL>, Nc>, Ns> > ColorVectorSpinVector;
typedef OScalar< PSpinMatrix< PColorMatrix< RComplex<REAL>, Nc>, Ns> > ColorMatrixSpinMatrix;

// Level below outer for internal convenience
typedef PScalar< PScalar< RScalar<REAL> > > IntReal;
typedef PScalar< PScalar< RScalar<INTEGER32> > > IntInteger;
typedef PScalar< PScalar< RScalar<DOUBLE> > > IntDouble;
typedef PScalar< PScalar< RScalar<LOGICAL> > > IntBoolean;

// Odd-ball to support random numbers
typedef Real ILatticeReal;
typedef Seed ILatticeSeed;

// Floating precision, but specific to a fixed color or spin
typedef OLattice< PScalar< PColorMatrix< RComplex<REAL>, 3> > > LatticeColorMatrix3;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL>, 3> > > ColorMatrix3;

// Fixed precision
typedef OLattice< PScalar< PColorMatrix< RComplex<REAL32>, Nc> > > LatticeColorMatrixF;
typedef OLattice< PScalar< PColorMatrix< RComplex<REAL32>, 3> > > LatticeColorMatrixF3;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL32>, Nc> > > ColorMatrixF;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL32>, 3> > > ColorMatrixF3;

typedef OLattice< PScalar< PColorMatrix< RComplex<REAL64>, Nc> > > LatticeColorMatrixD;
typedef OLattice< PScalar< PColorMatrix< RComplex<REAL64>, 3> > > LatticeColorMatrixD3;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL64>, Nc> > > ColorMatrixD;
typedef OScalar< PScalar< PColorMatrix< RComplex<REAL64>, 3> > > ColorMatrixD3;

typedef OScalar< PScalar< PScalar< RScalar<REAL32> > > > Real32;
typedef OScalar< PScalar< PScalar< RScalar<REAL64> > > > Real64;
typedef OScalar< PScalar< PScalar< RComplex<REAL32> > > > Complex32;
typedef OScalar< PScalar< PScalar< RComplex<REAL64> > > > Complex64;

// Equivalent names
typedef Integer  Int;

typedef Real32  RealF;
typedef Real64  RealD;

typedef LatticeInteger  LatticeInt;


/*! @} */   // end of group defs

QDP_END_NAMESPACE();


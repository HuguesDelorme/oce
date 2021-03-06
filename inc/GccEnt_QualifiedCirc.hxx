// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_QualifiedCirc_HeaderFile
#define _GccEnt_QualifiedCirc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class gp_Circ2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(GccEnt_QualifiedCirc);

//! Creates a qualified 2d Circle. <br>
//! A qualified 2D circle is a circle (gp_Circ2d circle) with a <br>
//! qualifier which specifies whether the solution of a <br>
//! construction algorithm using the qualified circle (as an argument): <br>
//! -   encloses the circle, or <br>
//! -   is enclosed by the circle, or <br>
//! -   is built so that both the circle and it are external to   one another, or <br>
//! -   is undefined (all solutions apply). <br>
class GccEnt_QualifiedCirc  {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Constructs a qualified circle by assigning the qualifier <br>
//! Qualifier to the circle Qualified. Qualifier may be: <br>
//! -   GccEnt_enclosing if the solution computed by a <br>
//!   construction algorithm using the qualified circle <br>
//!   encloses the circle, or <br>
//! -   GccEnt_enclosed if the solution is enclosed by the circle, or <br>
//! -   GccEnt_outside if both the solution and the circle <br>
//!   are external to one another, or <br>
//! -   GccEnt_unqualified if all solutions apply. <br>
  Standard_EXPORT   GccEnt_QualifiedCirc(const gp_Circ2d& Qualified,const GccEnt_Position Qualifier);
  //! Returns a 2D circle to which the qualifier is assigned. <br>
  Standard_EXPORT     gp_Circ2d Qualified() const;
  //! Returns <br>
//! -   the qualifier of this qualified circle, if it is enclosing, <br>
//! enclosed or outside, or <br>
//! -   GccEnt_noqualifier if it is unqualified. <br>
  Standard_EXPORT     GccEnt_Position Qualifier() const;
  //! Returns true if the Circ2d is Unqualified and false in <br>
//!          the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsUnqualified() const;
  //! Returns true if the solution computed by a construction <br>
//! algorithm using this qualified circle encloses the circle. <br>
  Standard_EXPORT     Standard_Boolean IsEnclosing() const;
  //! Returns true if the solution computed by a construction <br>
//! algorithm using this qualified circle is enclosed by the circle. <br>
  Standard_EXPORT     Standard_Boolean IsEnclosed() const;
  //! Returns true if both the solution computed by a <br>
//! construction algorithm using this qualified circle and the <br>
//! circle are external to one another. <br>
  Standard_EXPORT     Standard_Boolean IsOutside() const;
  GccEnt_QualifiedCirc( )
{
  
}
    const gp_Circ2d& _CSFDB_GetGccEnt_QualifiedCircTheQualified() const { return TheQualified; }
    GccEnt_Position _CSFDB_GetGccEnt_QualifiedCircTheQualifier() const { return TheQualifier; }
    void _CSFDB_SetGccEnt_QualifiedCircTheQualifier(const GccEnt_Position p) { TheQualifier = p; }



protected:




private: 


gp_Circ2d TheQualified;
GccEnt_Position TheQualifier;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

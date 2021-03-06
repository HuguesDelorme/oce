// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_IndexPixel_HeaderFile
#define _Aspect_IndexPixel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_Pixel_HeaderFile
#include <Aspect_Pixel.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Aspect_IndexPixel);


class Aspect_IndexPixel  : public Aspect_Pixel {

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

  
  Standard_EXPORT   Aspect_IndexPixel();
  
  Standard_EXPORT   Aspect_IndexPixel(const Standard_Integer anIndex);
  
  Standard_EXPORT     Standard_Integer Value() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex) ;
  //! Returns a hashed value denoting <me>. This value is in <br>
//!         the range 1..<Upper>. <br>
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  //! Prints the contents of <me> on the stream <s> <br>
  Standard_EXPORT     void Print(Standard_OStream& s) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Aspect_IndexPixel& Other) const;
    Standard_Boolean operator==(const Aspect_IndexPixel& Other) const
{
  return IsEqual(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsNotEqual(const Aspect_IndexPixel& Other) const;
    Standard_Boolean operator!=(const Aspect_IndexPixel& Other) const
{
  return IsNotEqual(Other);
}
    Standard_Integer _CSFDB_GetAspect_IndexPixelmyIndex() const { return myIndex; }
    void _CSFDB_SetAspect_IndexPixelmyIndex(const Standard_Integer p) { myIndex = p; }



protected:




private: 


Standard_Integer myIndex;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const Aspect_IndexPixel& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}



#endif

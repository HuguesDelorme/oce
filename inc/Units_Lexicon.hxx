// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_Lexicon_HeaderFile
#define _Units_Lexicon_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Units_Lexicon_HeaderFile
#include <Handle_Units_Lexicon.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Units_TokensSequence_HeaderFile
#include <Handle_Units_TokensSequence.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TCollection_HAsciiString;
class Units_TokensSequence;
class TCollection_AsciiString;


//! This class defines a lexicon useful to analyse and <br>
//!          recognize the  different key words  included  in a <br>
//!          sentence.  The lexicon is stored  in a sequence of <br>
//!          tokens. <br>
class Units_Lexicon : public MMgt_TShared {

public:

  //! Creates an empty instance of Lexicon. <br>
  Standard_EXPORT   Units_Lexicon();
  //! Reads the file <afilename> to create a sequence  of tokens <br>
//!          stored in <thesequenceoftokens>. <br>
  Standard_EXPORT     void Creates(const Standard_CString afilename) ;
  //! Returns the first item of the sequence of tokens. <br>
        Handle_Units_TokensSequence Sequence() const;
  //! Returns in a AsciiString from TCollection the name of the file. <br>
  Standard_EXPORT     TCollection_AsciiString FileName() const;
  //! Returns true if  the  file has not  changed  since the <br>
//!          creation   of   the  Lexicon   object.   Returns false <br>
//!          otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean UpToDate() const;
  //! Adds to the lexicon a new token with <aword>, <amean>, <br>
//!          <avalue>  as  arguments.  If there is  already a token <br>
//!          with   the  field  <theword>  equal    to <aword>, the <br>
//!          existing token is updated. <br>
  Standard_EXPORT     void AddToken(const Standard_CString aword,const Standard_CString amean,const Standard_Real avalue) ;
  //! Useful for debugging. <br>
      virtual  void Dump() const;




  DEFINE_STANDARD_RTTI(Units_Lexicon)

protected:




private: 


Handle_TCollection_HAsciiString thefilename;
time_t thetime;
Handle_Units_TokensSequence thesequenceoftokens;


};


#include <Units_Lexicon.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

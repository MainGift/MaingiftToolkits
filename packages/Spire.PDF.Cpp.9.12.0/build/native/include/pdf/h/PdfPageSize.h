#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "../../common/h/Size.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents information about page size.
    </summary>
*/
class EXPORTS PdfPageSize : public virtual Object
{
public:
    /*
    <summary>
        Letter format.
    </summary>
    */
    static intrusive_ptr<SizeF> Letter ();
    /*
    <summary>
        Note format.
    </summary>
    */
    static intrusive_ptr<SizeF> Note ();
    /*
    <summary>
        Legal format.
    </summary>
    */
    static intrusive_ptr<SizeF> Legal ();
    /*
    <summary>
        A0 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A0 ();
    /*
    <summary>
        A1 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A1 ();
    /*
    <summary>
        A2 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A2 ();
    /*
    <summary>
        A3 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A3 ();
    /*
    <summary>
        A4 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A4 ();
    /*
    <summary>
        A5 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A5 ();
    /*
    <summary>
        A6 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A6 ();
    /*
    <summary>
        A7 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A7 ();
    /*
    <summary>
        A8 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A8 ();
    /*
    <summary>
        A9 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A9 ();
    /*
    <summary>
        A10 format.
    </summary>
    */
    static intrusive_ptr<SizeF> A10 ();
    /*
    <summary>
        B0 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B0 ();
    /*
    <summary>
        B1 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B1 ();
    /*
    <summary>
        B2 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B2 ();
    /*
    <summary>
        B3 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B3 ();
    /*
    <summary>
        B4 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B4 ();
    /*
    <summary>
        B5 format.
    </summary>
    */
    static intrusive_ptr<SizeF> B5 ();
    /*
    <summary>
        ArchE format.
    </summary>
    */
    static intrusive_ptr<SizeF> ArchE ();
    /*
    <summary>
        ArchD format.
    </summary>
    */
    static intrusive_ptr<SizeF> ArchD ();
    /*
    <summary>
        ArchC format.
    </summary>
    */
    static intrusive_ptr<SizeF> ArchC ();
    /*
    <summary>
        ArchB format.
    </summary>
    */
    static intrusive_ptr<SizeF> ArchB ();
    /*
    <summary>
        ArchA format.
    </summary>
    */
    static intrusive_ptr<SizeF> ArchA ();
    /*
    <summary>
        The American Foolscap format.
    </summary>
    */
    static intrusive_ptr<SizeF> Flsa ();
    /*
    <summary>
        HalfLetter format.
    </summary>
    */
    static intrusive_ptr<SizeF> HalfLetter ();
    /*
    <summary>
        11x17 format.
    </summary>
    */
    static intrusive_ptr<SizeF> Letter11x17 ();
    /*
    <summary>
        Ledger format.
    </summary>
    */
    static intrusive_ptr<SizeF> Ledger ();
private:
};
}}
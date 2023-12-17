#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represent pdf layer collection.
    </summary>
*/
class EXPORTS PdfLayerCollection : public virtual Object
{
public:
    /*
    <summary>
        Get the pdf layer of the index.
    </summary>
    <param name="index">Pdf layer index</param>
    <returns>Pdf layer</returns>
    */
    intrusive_ptr<PdfLayer> GetItem (int index);
    /*
    <summary>
        Get the pdf layer of name.
            Notice: 
            Pdf layer name may be is not unique.
            If exist duplication of name,return first pdf layer of name.
            If not exist pdf layer of name,return null;
    </summary>
    <param name="name">Pdf layer name</param>
    <returns>Pdf layer</returns>
    */
    intrusive_ptr<PdfLayer> GetItem (LPCWSTR_S name);
    /*
    <summary>
        Gets the number of pdf layers contained.
    </summary>
    */
    int GetCount ();
    /*
    <summary>
        Create a new empty pdf layer outline.
    </summary>
    <returns>Pdf layer outline.</returns>
    */
    intrusive_ptr<PdfLayerOutline> NewOutline ();
    /*
    <summary>
        Add a new pdf layer.
    </summary>
    <param name="name">Pdf layer name.</param>
    <returns>Pdf layer.</returns>
    */
    intrusive_ptr<PdfLayer> AddLayer (LPCWSTR_S name);
    /*
    <summary>
        Add a new pdf layer.
    </summary>
    <param name="name">Pdf layer name.</param>
    <param name="state">Pdf layer's visibility.</param>
    <returns>Pdf layer.</returns>
    */
    intrusive_ptr<PdfLayer> AddLayer (LPCWSTR_S name,PdfVisibility state);
    /*
    <summary>
        Remove the pdf layer.
    </summary>
    <param name="layer">The pdf layer.</param>
    <returns>
            True if item is successfully removed; otherwise, false. This method also
             returns false if item was not found
            </returns>
    */
    bool RemoveLayer (intrusive_ptr<PdfLayer> layer);
    /*
    <summary>
        Remove the pdf layer.
    </summary>
    <param name="layer">The pdf layer.</param>
    <param name="withContent">If true,remove content with the pdf layer.Otherwise,false.</param>
    <returns>
            True if item is successfully removed; otherwise, false. This method also
             returns false if item was not found
            </returns>
    */
    bool RemoveLayer (intrusive_ptr<PdfLayer> layer,bool withContent);
    /*
    <summary>
        Remove the pdf layer.
            Notice: Pdf layer name may be is not unique.
            If exist duplication of name,will remove all pdf layers of name.
    </summary>
    <param name="name">Pdf layer name.</param>
    <returns>
            True if item is successfully removed; otherwise, false. This method also
             returns false if item was not found
            </returns>
    */
    bool RemoveLayer (LPCWSTR_S name);
    /*
    <summary>
        Remove the pdf layer.
            Notice: Pdf layer name may be is not unique.
            If exist duplication of name,will remove all pdf layers of name.
    </summary>
    <param name="name">Pdf layer name.</param>
    <param name="withContent">If true,remove content with the pdf layer.Otherwise,false.</param>
    <returns>
            True if item is successfully removed; otherwise, false. This method also
             returns false if item was not found
            </returns>
    */
    bool RemoveLayer (LPCWSTR_S name,bool withContent);
    /*

    */
    //System.Collections.IEnumerator GetEnumerator ();
private:
};
}}
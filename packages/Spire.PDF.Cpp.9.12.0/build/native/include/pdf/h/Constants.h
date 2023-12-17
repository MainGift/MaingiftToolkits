#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS Constants : public virtual Object
{
public:
    /*

    */
    static int HeaderSignature ();
    /*

    */
    static int HeaderSignatureBytes ();
    /*

    */
    static int BufferSize ();
    /*

    */
    //static System.Int16 VersionNeededToExtract ();
    /*

    */
    //static System.Int16 VersionMadeBy ();
    /*

    */
    static int ShortSize ();
    /*

    */
    static int IntSize ();
    /*

    */
    static int CentralHeaderSignature ();
    /*

    */
    static int CentralDirectoryEndSignature ();
    /*

    */
    //static System.UInt32 StartCrc ();
    /*

    */
    static int CentralDirSizeOffset ();
    /*

    */
    static int EndOfCentralRecordBaseSize ();
    /*

    */
    static int Zip64CentralDirLocatorSignature ();
    /*

    */
    static int Zip64CentralFileHeaderSignature ();
private:
};
}}
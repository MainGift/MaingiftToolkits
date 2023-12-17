#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the security settings of the PDF document.
    </summary>
*/
class EXPORTS PdfSecurity : public virtual Object
{
public:
    /*
    <summary>
        Gets the owner password.
    </summary>
    */
    LPCWSTR_S GetOwnerPassword ();
    /*
    <summary>
        Gets the user password.
    </summary>
    */
    LPCWSTR_S GetUserPassword ();
    /*
    <summary>
        Indicate whether this pdf document was encrypted originally or not. 
    </summary>
    */
    bool GetOriginalEncrypt ();
    /*
    <summary>
        Decrypt user password
    </summary>
    */
    void DecryptUserPassWord ();
    /*
    <summary>
        Decrypt user password.
    </summary>
    <param name="ownerPassword">The ownerPassword</param>
    */
    void DecryptUserPassWord (LPCWSTR_S ownerPassword);
    /*
    <summary>
        Decrypt all password.
    </summary>
    <param name="ownerPassword">The ownerPassword</param>
    */
    void DecryptOwnerPassWord (LPCWSTR_S ownerPassword);
    /*
    <summary>
        To Encrypt the PDF document with open password.
            Note:If set empty string value to open password, it indicates that the PDF document can be operated without providing corresponding password. 
            Note: the document owner password should not be exist.
    </summary>
    <param name="openPassword">The open password</param>
    */
    void Encrypt (LPCWSTR_S openPassword);
    /*
    <summary>
        To Encrypt the PDF document with permission password and permissions.
            Note:The Permission password can't be empty string.
    </summary>
    <param name="permissionPassword">The permission password</param>
    <param name="permissions">A set of flags specifying which operations are permitted when the document is opened with user access</param>
    */
    void Encrypt (LPCWSTR_S permissionPassword,PdfPermissionsFlags permissions);
    /*
    <summary>
        To Encrypt the PDF document and set the encryption key size and permissions.
            Note:If set empty string value to open password or permission password, it indicates that the PDF document can be operated without providing corresponding password. 
    </summary>
    <param name="openPassword">The open password</param>
    <param name="permissionPassword">The permission password</param>
    <param name="permissions">A set of flags specifying which operations are permitted when the document is opened with user access</param>
    <param name="keySize">The bit length of the encryption key</param>
    <returns></returns>
    */
    void Encrypt (LPCWSTR_S openPassword,LPCWSTR_S permissionPassword,PdfPermissionsFlags permissions,PdfEncryptionKeySize keySize);
    /*
    <summary>
        To Encrypt the PDF document with open password and permission password,and set the encryption key size and permissions.
            Note:If set empty string value to open password or permission password, it indicates that the PDF document can be operated without providing corresponding password. 
    </summary>
    <param name="openPassword">The open password</param>
    <param name="permissionPassword">The permission password</param>
    <param name="permissions">A set of flags specifying which operations are permitted when the document is opened with user access</param>
    <param name="keySize">The bit length of the encryption key</param>
    <param name="originalPermissionPassword">The original permissionPassword of the document</param>
    */
    void Encrypt (LPCWSTR_S openPassword,LPCWSTR_S permissionPassword,PdfPermissionsFlags permissions,PdfEncryptionKeySize keySize,LPCWSTR_S originalPermissionPassword);
    /*
    <summary>
        Gets the document's permission flags
    </summary>
    */
    PdfPermissionsFlags GetPermissions ();
    /*
    <summary>
        Gets the size of the key.
    </summary>
    */
    PdfEncryptionKeySize GetKeySize ();
private:
};
}}
#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "PdfUnidimensionalBarcode.h"
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents a Code128A barcode.
    </summary>
<remarks> Only the following symbols are allowed in a Code 128 A barcode: NUL (\x00) SOH (\x01) STX (\x02) ETX (\x03) EOT (\x04) ENQ (\x05) ACK (\x06) BEL (\x07) BS (\x08) HT (\x09) LF (\x0A) VT (\x0B) FF (\x0C) CR (\x0D) SO (\x0E) SI (\x0F) DLE (\x10) DC1 (\x11) DC2 (\x12) DC3 (\x13) DC4 (\x14) NAK (\x15) SYN (\x16) ETB (\x17) CAN (\x18) EM (\x19) SUB (\x1A) ESC (\x1B) FS (\x1C) GS (\x1D) RS (\x1E) US (\x1F) SPACE !  # $ % ' * + , - . 0 1 2 3 4 5 6 7 8 9 : ; ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ]^ _ FNC1 (\xF0) FNC2 (\xF1) FNC3 (\xF2) FNC4  </remarks>
*/
class EXPORTS PdfCode128ABarcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCode128ABarcode();

    PdfCode128ABarcode(LPCWSTR_S text);
private:
};
}}
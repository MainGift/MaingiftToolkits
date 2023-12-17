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
        Represents a Code128B Barcode.
    </summary>
<remarks> Only the following symbols are allowed in a Code 128 B barcode:SPACE ! " # $ % ' ( ) * + , - . / 0 12 3 4 5 6 7 8 9 : ; ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ]^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ DEL (\x7F) FNC1 (\xF0) FNC2 (\xF1) FNC3 (\xF2) FNC4 (\xF3) SHIFT (\xF4). </remarks>
*/
class EXPORTS PdfCode128BBarcode : public virtual PdfUnidimensionalBarcode
{
public:
    PdfCode128BBarcode();

    PdfCode128BBarcode(LPCWSTR_S text);
private:
};
}}
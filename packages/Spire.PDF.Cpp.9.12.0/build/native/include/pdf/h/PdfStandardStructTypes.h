#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(disable:4819)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*
    <summary>
        Represents the standard struct types.
    </summary>
*/
class EXPORTS PdfStandardStructTypes : public virtual Object
{
public:
    /*
    <summary>
        A complete document. This is the root element of any structure tree containing multiple parts or multiple articles.
    </summary>
    */
    static LPCWSTR_S Document ();
    /*
    <summary>
        A large-scale division of a document. This type of element is appropriate for grouping articles or sections.
    </summary>
    */
    static LPCWSTR_S Part ();
    /*
    <summary>
        A relatively self-contained body of text constituting a single narrative or exposition. Articles should be disjoint; 
            that is, they should not contain other articles as constituent elements.
    </summary>
    */
    static LPCWSTR_S Article ();
    /*
    <summary>
        A container for grouping related content elements. For example, a section might contain a heading, several introductory
            paragraphs, and two or more other sections nested within it as subsections.
    </summary>
    */
    static LPCWSTR_S Section ();
    /*
    <summary>
        A generic block-level element or group of elements.
    </summary>
    */
    static LPCWSTR_S Division ();
    /*
    <summary>
        A portion of text consisting of one or more paragraphs attributed to someone other than the author of the surrounding text.
    </summary>
    */
    static LPCWSTR_S BlockQuote ();
    /*
    <summary>
        A brief portion of text describing a table or figure.
    </summary>
    */
    static LPCWSTR_S Caption ();
    /*
    <summary>
        A list made up of table of contents item entries and/or other nested table of contents entries.
    </summary>
    */
    static LPCWSTR_S TOC ();
    /*
    <summary>
        An individual member of a table of contents.
    </summary>
    */
    static LPCWSTR_S TOCI ();
    /*
    <summary>
        A sequence of entries containing identifying text accompanied by reference elements
            that point out occurrences of the specified text in the main body of a document.
    </summary>
    */
    static LPCWSTR_S Index ();
    /*
    <summary>
        A grouping element having no inherent structural significance; it serves solely for grouping purposes. 
            This type of element differs from a division (structure type Div) in that it is not interpreted 
            or exported to other document formats; however, its descendants are to be processed normally.
    </summary>
    */
    static LPCWSTR_S NonStruct ();
    /*
    <summary>
        A grouping element containing private content belonging to the application producing it. 
            The structural significance of this type of element is unspecified and is determined entirely by the producer application. 
            Neither the Private element nor any of its descendants are to be interpreted or exported to other document formats.
    </summary>
    */
    static LPCWSTR_S Private ();
    /*
    <summary>
        A label for a subdivision of a document’s content. It should be the first child of the division that it heads.
    </summary>
    */
    static LPCWSTR_S Heading ();
    /*
    <summary>
        Headings with specific levels, for use in applications that cannot hierarchically nest their sections and thus 
            cannot determine the level of a heading from its level of nesting.
    </summary>
    */
    static LPCWSTR_S HeadingLevel1 ();
    /*
    <summary>
        Headings with specific levels, for use in applications that cannot hierarchically nest their sections and thus 
            cannot determine the level of a heading from its level of nesting.
    </summary>
    */
    static LPCWSTR_S HeadingLevel2 ();
    /*
    <summary>
        Headings with specific levels, for use in applications that cannot hierarchically nest their sections and thus 
            cannot determine the level of a heading from its level of nesting.
    </summary>
    */
    static LPCWSTR_S HeadingLevel3 ();
    /*
    <summary>
        Headings with specific levels, for use in applications that cannot hierarchically nest their sections and thus 
            cannot determine the level of a heading from its level of nesting.
    </summary>
    */
    static LPCWSTR_S HeadingLevel4 ();
    /*
    <summary>
        Headings with specific levels, for use in applications that cannot hierarchically nest their sections and thus 
            cannot determine the level of a heading from its level of nesting.
    </summary>
    */
    static LPCWSTR_S HeadingLevel5 ();
    /*

    */
    static LPCWSTR_S HeadingLevel6 ();
    /*
    <summary>
        A low-level division of text.
    </summary>
    */
    static LPCWSTR_S Paragraph ();
    /*
    <summary>
        A sequence of items of like meaning and importance. Its immediate children should be an optional caption 
            (structure type Caption) followed by one or more list items (structure type LI).
    </summary>
    */
    static LPCWSTR_S List ();
    /*
    <summary>
        An individual member of a list. Its children may be one or more labels, list bodies, or both (structure types Lbl or LBody).
    </summary>
    */
    static LPCWSTR_S ListItem ();
    /*
    <summary>
        A name or number that distinguishes a given item from others in the same list or other group of like items. In a dictionary list, 
            for example, it contains the term being defined; in a bulleted or numbered list, it contains the bullet character or the number of the list item and associated punctuation.
    </summary>
    */
    static LPCWSTR_S Label ();
    /*
    <summary>
        The descriptive content of a list item. In a dictionary list, for example, it contains the definition of the term. It can either contain the content directly or have other BLSEs, 
            perhaps including nested lists, as children.
    </summary>
    */
    static LPCWSTR_S ListBody ();
    /*
    <summary>
        A two-dimensional layout of rectangular data cells, possibly having a complex substructure. It contains either one or more table rows (structure type TR) as children; 
            or an optional table head (structure type THead) followed by one or more table body elements (structure type TBody) and an optional table footer (structure type TFoot). 
            In addition, a table may have an optional caption (structure type Caption; see “Grouping Elements” on page 899) as its first or last child.
    </summary>
    */
    static LPCWSTR_S Table ();
    /*
    <summary>
        A row of headings or data in a table. It may contain table header cells and table data cells (structure types TH and TD).
    </summary>
    */
    static LPCWSTR_S TableRow ();
    /*
    <summary>
        A table cell containing header text describing one or more rows or columns of the table.
    </summary>
    */
    static LPCWSTR_S TableHeaderCell ();
    /*
    <summary>
        A table cell containing data that is part of the table’s content.
    </summary>
    */
    static LPCWSTR_S TableDataCell ();
    /*
    <summary>
        A group of rows that constitute the header of a table. If the table is split across multiple pages, 
            these rows may be redrawn at the top of each table fragment (although there is only one THead element).
    </summary>
    */
    static LPCWSTR_S TableHeader ();
    /*
    <summary>
        A group of rows that constitute the main body portion of a table. If the table is split across multiple pages, the body area may be broken apart on a row boundary. 
            A table may have multiple TBody elements to allow for the drawing of a border or background for a set of rows.
    </summary>
    */
    static LPCWSTR_S TableBody ();
    /*
    <summary>
        A group of rows that constitute the footer of a table. If the table is split across multiple pages, these rows may be redrawn at the bottom of each table fragment 
            (although there is only one TFoot element.)
    </summary>
    */
    static LPCWSTR_S TableFooter ();
    /*
    <summary>
        generic inline portion of text having no particular inherent characteristics. 
            It can be used, for example, to delimit a range of text with a given set of styling attributes.
    </summary>
    */
    static LPCWSTR_S Span ();
    /*
    <summary>
        An inline portion of text attributed to someone other than the author of the surrounding text.
    </summary>
    */
    static LPCWSTR_S Quotation ();
    /*
    <summary>
        An item of explanatory text, such as a footnote or an endnote, that is referred to from within the body of the document.
    </summary>
    */
    static LPCWSTR_S Note ();
    /*
    <summary>
        A citation to content elsewhere in the document.
    </summary>
    */
    static LPCWSTR_S Reference ();
    /*
    <summary>
        A reference identifying the external source of some cited content. It may contain a label (structure type Lbl) as a child.
    </summary>
    */
    static LPCWSTR_S BibEntry ();
    /*
    <summary>
        A fragment of computer program text.
    </summary>
    */
    static LPCWSTR_S Code ();
    /*
    <summary>
        An association between a portion of the ILSE’s content and a corresponding link annotation or annotations.
            Its children are one or more content items or child ILSEs and one or more object references identifying the associated link annotations.
    </summary>
    */
    static LPCWSTR_S Link ();
    /*
    <summary>
        An association between a portion of the ILSE’s content and a corresponding PDF annotation.
    </summary>
    */
    static LPCWSTR_S Annotation ();
    /*
    <summary>
        A side-note (annotation) written in a smaller text size and placed adjacent to the base text to which it refers. 
            It is used in Japanese and Chinese to describe the pronunciation of unusual words or to describe such items as abbreviations and logos. 
            A Rubyelement may also contain the RB, RT, and RP elements
    </summary>
    */
    static LPCWSTR_S Ruby ();
    /*
    <summary>
        (Ruby base text) The full-size text to which the ruby annotation is applied. 
            RB can contain text, other inline elements, or a mixture of both. It may have the RubyAlign attribute.
    </summary>
    */
    static LPCWSTR_S RB ();
    /*
    <summary>
        (Ruby annotation text) The smaller-size text that is placed adjacent to the ruby base text. 
            It can contain text, other inline elements, or a mixture of both. It may have the RubyAlignand RubyPosition attributes.
    </summary>
    */
    static LPCWSTR_S RT ();
    /*
    <summary>
        (Ruby punctuation) Punctuation surrounding the ruby annotation text. 
            It us used only when a ruby annotation cannot be properly formatted in a ruby style and instead is formatted as a normal comment, 
            or when it is formatted as a warichu. It contains text (usually a single open or close parenthesis or similar bracketing character).
    </summary>
    */
    static LPCWSTR_S RP ();
    /*
    <summary>
        A comment or annotation in a smaller text size and formatted onto two smaller lines within the height of the containing text line and 
            placed following (inline) the base text to which it refers. It is used in Japanese for descriptive comments and 
            for ruby annotation text that is too long to be aesthetically formatted as a ruby. A Warichu element may also contain the WT and WP elements.
    </summary>
    */
    static LPCWSTR_S Warichu ();
    /*
    <summary>
        (Warichu text) The smaller-size text of a warichu comment that is formatted into two lines and placed between surrounding WP elements.
    </summary>
    */
    static LPCWSTR_S WT ();
    /*
    <summary>
        (Warichu punctuation) The punctuation that surrounds the WT text. It contains text (usually a single open or close parenthesis or similar bracketing character).
    </summary>
    */
    static LPCWSTR_S WP ();
    /*
    <summary>
        An item of graphical content. Its placement may be specified with the Placementlayout attribute.
    </summary>
    */
    static LPCWSTR_S Figure ();
    /*
    <summary>
        A mathematical formula.
    </summary>
    */
    static LPCWSTR_S Form ();
    /*
    <summary>
        A widget annotation representing an interactive form field.
    </summary>
    */
    static LPCWSTR_S Formula ();
private:
};
}}
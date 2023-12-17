#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Pdf{
/*

*/
class EXPORTS ImgData 
{
public:
    /*

    */
    virtual int GetTileWidth ()=0;
    /*

    */
    virtual int GetTileHeight ()=0;
    /*

    */
    virtual int GetNomTileWidth ()=0;
    /*

    */
    virtual int GetNomTileHeight ()=0;
    /*

    */
    virtual int GetImgWidth ()=0;
    /*

    */
    virtual int GetImgHeight ()=0;
    /*

    */
    virtual int GetNumComps ()=0;
    /*

    */
    virtual int GetTileIdx ()=0;
    /*

    */
    virtual int GetTilePartULX ()=0;
    /*

    */
    virtual int GetTilePartULY ()=0;
    /*

    */
    virtual int GetImgULX ()=0;
    /*

    */
    virtual int GetImgULY ()=0;
    /*

    */
    virtual int getCompSubsX (int c)=0;
    /*

    */
    virtual int getCompSubsY (int c)=0;
    /*

    */
    virtual int getTileCompWidth (int t,int c)=0;
    /*

    */
    virtual int getTileCompHeight (int t,int c)=0;
    /*

    */
    virtual int getCompImgWidth (int c)=0;
    /*

    */
    virtual int getCompImgHeight (int c)=0;
    /*

    */
    virtual int getNomRangeBits (int c)=0;
    /*

    */
    virtual void setTile (int x,int y)=0;
    /*

    */
    virtual void nextTile ()=0;
    /*

    */
    virtual intrusive_ptr<Coord> getTile (intrusive_ptr<Coord> co)=0;
    /*

    */
    virtual int getCompULX (int c)=0;
    /*

    */
    virtual int getCompULY (int c)=0;
    /*

    */
    virtual intrusive_ptr<Coord> getNumTiles (intrusive_ptr<Coord> co)=0;
    /*

    */
    virtual int getNumTiles ()=0;
private:
};
}}


#ifndef COORDINATEPOSITION_H
#define COORDINATEPOSITION_H

#include <string>

namespace AVN
{

struct cCoordinatePosition
{
    double m_dLatitude_deg;
    double m_dLongitude_deg;
    float m_fAltitude_mASL;
    std::string m_strLabel;

    //Default constructor everything to zero.
    cCoordinatePosition() :
        m_dLatitude_deg(0.0),
        m_dLongitude_deg(0.0),
        m_fAltitude_mASL(0.0f),
        m_strLabel("")
    {
    }

    //Compared function on labels for sorting vectors of cCoordinatePostion by label
    static bool compareLabel(cCoordinatePosition oPos1, cCoordinatePosition oPos2)
    {
        //Invert the output of compare function for alphabetically ascending:
        return !oPos1.m_strLabel.compare(oPos2.m_strLabel);
    }
};

}

#endif // COORDINATEPOSITION_H

#ifndef COORDINATEPOSITION_H
#define COORDINATEPOSITION_H

//System includes
#include <string>
#include <inttypes.h>

//Library includes

//Local includes

namespace AVN
{

struct cCoordinatePosition
{
    double m_dLatitude_deg;
    double m_dLongitude_deg;
    float m_fAltitude_mASL;
    std::string m_strLabel;

    //Default constructor everything to zero.
    cCoordinatePosition();

    //Compared function on labels for sorting vectors of cCoordinatePostion by label
    static bool compareLabel(cCoordinatePosition oPos1, cCoordinatePosition oPos2);

    //Convert from decimal degrees to DMS
    static void decimalDegreesToDMS(double dDecimalDegrees, int32_t &i32Degrees, int32_t &i32Minutes, double &dSeconds);
};

}

#endif // COORDINATEPOSITION_H

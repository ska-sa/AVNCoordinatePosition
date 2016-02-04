//System includes

//Library includes

//Local includes
#include "CoordinatePosition.h"


AVN::cCoordinatePosition::cCoordinatePosition() :
    m_dLatitude_deg(0.0),
    m_dLongitude_deg(0.0),
    m_fAltitude_mASL(0.0f),
    m_strLabel("")
{
}

bool AVN::cCoordinatePosition::compareLabel(const cCoordinatePosition &oPos1, const cCoordinatePosition &oPos2)
{
    //Invert the output of compare function for alphabetically ascending:
    return !oPos1.m_strLabel.compare(oPos2.m_strLabel);
}

void AVN::cCoordinatePosition::decimalDegreesToDMS(double dDecimalDegrees, int32_t &i32Degrees, int32_t &i32Minutes, double &dSeconds)
{
    i32Degrees  = (int32_t)( dDecimalDegrees );
    i32Minutes  = (int32_t)( (dDecimalDegrees - (double)i32Degrees) * 60.0);
    dSeconds    = (int32_t)( (dDecimalDegrees - (double)i32Degrees - (double)i32Minutes / 60.0) * 60.0 * 60.0);
}

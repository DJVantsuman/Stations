#ifndef FMSTATION_H
#define FMSTATION_H

#include "station.h"

class FmStation : public Station
{
public:
    FmStation();
    FmStation(std::string name, std::string waveband, int wave);
    FmStation(FmStation const & station);
    ~FmStation();
    FmStation &operator=(FmStation const & station);

    std::string title()const;
};

#endif // FMSTATION_H

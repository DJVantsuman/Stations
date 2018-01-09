#ifndef AMSTATION_H
#define AMSTATION_H

#include "station.h"

class AmStation : public Station
{
public:
    AmStation();
    AmStation(std::string name, std::string waveband, int wave);
    AmStation(AmStation const & station);
    ~AmStation();
    AmStation &operator=(AmStation const & station);

    std::string title()const;
};

#endif // AMSTATION_H

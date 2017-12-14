#ifndef AMSTATION_H
#define AMSTATION_H

#include "station.h"

class AmStation : public Station
{
public:
    Q_PROPERTY(QString name READ title)
    AmStation();
    AmStation(int radioWave, std::string name, std::string waveband);
    ~AmStation();
    AmStation(AmStation const & station);
    AmStation &operator=(AmStation const & station);

    Q_INVOKABLE std::string title();
};

#endif // AMSTATION_H

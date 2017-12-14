#ifndef FMSTATION_H
#define FMSTATION_H

#include <QObject>
#include "station.h"

class FmStation : public Station
{
public:
    Q_PROPERTY(QString name READ title)
    FmStation();
    FmStation(int radioWave, std::string name, std::string waveband);
    ~FmStation();
    FmStation(FmStation const & station);
    FmStation &operator=(FmStation const & station);

    Q_INVOKABLE std::string title();
};

#endif // FMSTATION_H

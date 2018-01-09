#ifndef STATION_H
#define STATION_H

#include <QObject>
#include <iostream>

class Station : public QObject
{
    Q_OBJECT
public:
    Station();
    virtual ~Station();

    virtual std::string title()const = 0;
    std::string getName() const;
    std::string getWaveband() const;
    int         getWave() const;

protected:
    std::string mName;
    std::string mWaveband;
    int         mWave;
};

#endif // STATION_H

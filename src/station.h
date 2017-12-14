#ifndef STATION_H
#define STATION_H

#include <QAbstractItemModel>
#include <iostream>
#include <QObject>

class Station : public QObject
{
    Q_OBJECT

public:
    explicit Station();
    Station(Station const & station);
    virtual ~Station();
    Station &operator=(Station const & station);

    virtual std::string title() = 0;

protected:
    int _radioWave;
    std::string _name;
    std::string _waveband;
};

#endif // STATION_H

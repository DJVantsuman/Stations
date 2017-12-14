#include "station.h"

Station::Station()
{
}

Station::Station(Station const & station): QObject() {
    _radioWave = station._radioWave;
    _name = station._name;
    _waveband = station._waveband;
}

Station::~Station() {

}

Station &	Station::operator=(Station const & station)
{
    if (this != &station) {
        _radioWave = station._radioWave;
        _name = station._name;
        _waveband = station._waveband;
    }
    return *this;
}

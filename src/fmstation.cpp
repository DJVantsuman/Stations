#include "fmstation.h"

FmStation::FmStation() {}

FmStation::FmStation(int radioWave, std::string name, std::string waveband) {
    _radioWave = radioWave;
    _name = name;
    _waveband = waveband;
}

FmStation::FmStation(FmStation const & station) : Station() {
    _radioWave = station._radioWave;
    _name = station._name;
    _waveband = station._waveband;
}

FmStation &	FmStation::operator=(FmStation const & station)
{
    if (this != &station) {
        _radioWave = station._radioWave;
        _name = station._name;
        _waveband = station._waveband;
    }
    return *this;
}

FmStation::~FmStation() {
    std::cout << this->title() + " destroyed" << std::endl;
}

std::string FmStation::title() {
    return _name + " FM";
}

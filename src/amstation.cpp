#include "amstation.h"

AmStation::AmStation() {}

AmStation::AmStation(int radioWave, std::string name, std::string waveband) {
    _radioWave = radioWave;
    _name = name;
    _waveband = waveband;
}

AmStation::AmStation(AmStation const & station) : Station() {
    _radioWave = station._radioWave;
    _name = station._name;
    _waveband = station._waveband;
}

AmStation &	AmStation::operator=(AmStation const & station)
{
    if (this != &station) {
        _radioWave = station._radioWave;
        _name = station._name;
        _waveband = station._waveband;
    }
    return *this;
}

AmStation::~AmStation() {
    std::cout << this->title() + " destroyed" << std::endl;
}

std::string AmStation::title() {
    return _name + " AM";
}

#include "amstation.h"

AmStation::AmStation(){

}

AmStation::AmStation(std::string name, std::string waveband, int wave) {
    mName = name;
    mWaveband = waveband;
    mWave = wave;
}

AmStation::AmStation(AmStation const & station): Station(){
    mName = station.mName;
    mWaveband = station.mWaveband;
    mWave = station.mWave;
}

AmStation::~AmStation() {
    std::cout << title() << " destroyed." << std::endl;
}

AmStation &AmStation::operator=(AmStation const & station) {
    if (this != &station) {
        mName = station.mName;
        mWaveband = station.mWaveband;
        mWave = station.mWave;
    }
    return *this;
}

std::string AmStation::title() const {
    return mName + " AM";
}

#include "fmstation.h"

FmStation::FmStation() {

}

FmStation::FmStation(std::string name, std::string waveband, int wave) {
    mName = name;
    mWaveband = waveband;
    mWave = wave;
}

FmStation::FmStation(FmStation const & station): Station(){
    mName = station.mName;
    mWaveband = station.mWaveband;
    mWave = station.mWave;
}

FmStation::~FmStation() {
    std::cout << title() << " destroyed." << std::endl;
}

FmStation &FmStation::operator=(FmStation const & station) {
    if (this != &station) {
        mName = station.mName;
        mWaveband = station.mWaveband;
        mWave = station.mWave;
    }
    return *this;
}

std::string FmStation::title() const {
    return mName + " FM";
}

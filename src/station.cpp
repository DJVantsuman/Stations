#include "station.h"

Station::Station() {
}

Station::~Station() {
}

std::string Station::getName() const {
    return mName;
}

std::string Station::getWaveband() const {
    return mWaveband;
}

int Station::getWave() const {
    return mWave;
}

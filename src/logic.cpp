#include "logic.h"
#include <QList>
#include <QByteArray>
#include <QHash>
#include <iostream>

Logic::Logic() {

}

Logic::~Logic() {

}

void Logic::show(std::list<Station *> stations) {
        for ( const auto & item : stations )
            std::cout << item->title() << std::endl;
}

std::list<Station * > Logic::getList() {
    std::list<Station *> stations;
    std::string name[] = {"Jam", "Hit", "Rok"};

    for(int i = 0; i < 100; i++)
        if(i % 2 == 0)
            stations.push_back(new FmStation(rand(), name[rand() % 3], "FM"));
        else
            stations.push_back(new AmStation(rand(), name[rand() % 3], "AM"));

    return stations;
}

void Logic::clear(std::list<Station *> stations) {
    for ( const auto & item : stations )
        delete item;
}

#pragma once
#include <memory>
#include <QAbstractListModel>
#include <list>
#include "station.h"
#include "fmstation.h"
#include "amstation.h"

class Logic : public QObject
{
    Q_OBJECT
public:
    Logic();
    ~Logic();
private:
    std::list<Station *> stations;

public:
    void show(std::list<Station *> stations);
    std::list<Station *> getList();
    void clear(std::list<Station *> stations);
};

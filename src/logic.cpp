#include "logic.h"
#include <QDebug>

Logic::Logic(QObject *parent)
    : QAbstractListModel(parent)
{
    std::string band[] = {"FM", "AM"};
    std::string name[] = {"Jam", "Hit", "Rok", "Lux", "Shanson", "DJ"};
    for(int i = 0; i < 100; i++){
        std::string var_band = band[rand() % 2];
        if(var_band == "FM")
            addStation(new FmStation(name[rand() % 6], var_band, i));
        else
            addStation(new AmStation(name[rand() % 6], var_band, i));
    }
}

Logic::~Logic() {
    clear();
}

QHash<int, QByteArray> Logic::roleNames() const {
  QHash<int, QByteArray> names;
  names[Title] = "title";
  names[Wave] = "wave";
  return names;
}

int Logic::rowCount(const QModelIndex &parent) const {
    if (parent.isValid())
            return 0;
    return stationsList.count();
}

QVariant Logic::data(const QModelIndex &index, int role) const {
    if (!index.isValid())
        return QVariant();
    if (index.row() < 0 || index.row() > stationsList.count())
            return QVariant();

    const Station *station = stationsList[index.row()];
        if (role == Title)
            return QString::fromStdString(station->title());
        else if (role == Wave)
            return station->getWave();
    return QVariant();
}

void Logic::addStation(Station *station) {
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    stationsList << station;
    endInsertRows();
}

void Logic::show() {
    for ( const auto & item : stationsList )
        std::cout << item->title() << std::endl;
}

void Logic::clear() {
    for ( const auto & item : stationsList)
        delete item;
}

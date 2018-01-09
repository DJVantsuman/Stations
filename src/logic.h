#ifndef LOGIC_H
#define LOGIC_H

#include <QAbstractListModel>
#include <iostream>
#include "station.h"
#include "fmstation.h"
#include "amstation.h"

class Logic : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
            Title = Qt::UserRole + 1,
            Wave
    };
    explicit Logic(QObject *parent = 0);
    ~Logic();

    void addStation(Station *station);
    void show();
    void clear();

    // Basic functionality:
    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QList<Station *> stationsList;

};

#endif // LOGIC_H

import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2

ApplicationWindow {
    title: qsTr("Stations")
    visible: true
    width: 800
    height: 600

    ListView {
        width: 100; height: 100
        spacing: 5

        model: logic
        delegate: Rectangle {
            height: 25
            width: parent.width
            Text { text:  name }
        }
    }
}

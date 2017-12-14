import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    width: 300
    height: 400
    title: qsTr("Stations")
    visible: true

    ListView {
        width: 100; height: 100

        model: logic
        delegate: Rectangle {
            height: 25
            width: 100
//            color: model.modelData.color
            Text { text: name }
        }
    }
}

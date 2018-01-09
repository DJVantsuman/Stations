import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 300
    height: 400
    title: qsTr("Stations List")

    Component {
        id: delegate
        Rectangle {
            width: parent.width
            height: 22
            border.color: "black"
            radius: 10
            color: "skyblue"

            Row {
                id: row
                anchors.left: parent.left
                anchors.right: parent.right
                height: parent.height
                anchors.margins: 5

                Text {
                    id: titleText
                    width: 250
                    text: title
                    font.pointSize: 12
                    font.bold: true
                    anchors.verticalCenter: row.verticalCenter
                }
                Text {
                    id: waveTaxt
                    width: 50
                    text: wave
                    font.pointSize: 12
                    font.bold: true
                    anchors.verticalCenter: row.verticalCenter
                }
            }
        }
    }

    ListView {
        id: list
        delegate: delegate
        anchors.fill: parent
        model: logic
    }
}

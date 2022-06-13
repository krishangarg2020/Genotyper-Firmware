import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.3

Window {
    id: root_window

    property int screen_width: 720
    property int screen_height: 720

    width: screen_width
    height: screen_height

    visible: true
    title: qsTr("eSNP Detector")

    flags: Qt.FramelessWindowHint

    Rectangle {
        id: root_background

        property color screen_background: "antiquewhite"

        anchors.fill: parent
        color: screen_background

        ColumnLayout {

            width: parent.width

            Text {
                text: "ADCY8"
                font.pixelSize: 100
                font.weight: Font.Thin
            }

            Text {
                text: "Absolute Pitch"
                font.pixelSize: 100
            }

            Text {
                text: "It is the ability to instantaneously identify and label tones with their musical note names, without the aid of an external reference tone."
                font.pixelSize: 24
                font.weight: Font.Light
                wrapMode: Text.WordWrap
            }

        }
    }

}

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

    //    flags: Qt.FramelessWindowHint

    property color screen_background: "white"
    color: screen_background

    Rectangle {
        id: root_background

        anchors.fill: parent
        anchors {
            rightMargin: 80
            leftMargin: 80
            bottomMargin: 80
            topMargin: 80
        }

        clip: true

        GridLayout {
            anchors.left: parent.left
            anchors.top: parent.top
            clip: false

            anchors.fill: parent

            Text {
                text: "ADCY8"
                font.pixelSize: 100
                Layout.fillWidth: true
                Layout.rowSpan: 1
                Layout.columnSpan: 2
                font.styleName: "Ultralight"
                font.weight: Font.ExtraLight
                font.family: "SF Pro Rounded"
                font.capitalization: Font.AllUppercase
            }

            Text {
                text: "Absolute\nPitch"
                font.pixelSize: 100
                verticalAlignment: Text.AlignBottom
                lineHeight: 0.8
                Layout.fillWidth: true
                Layout.columnSpan: 2
                font.capitalization: Font.Capitalize
                font.styleName: "Regular"
                font.weight: Font.ExtraLight
            }

            Text {
                text: "(noun)"
                font.pixelSize: 24
                font.family: "SF Pro Rounded"
                font.weight: Font.ExtraLight
                font.capitalization: Font.MixedCase
            }

            Text {
                width: 100
                height: 200
                text: "It is the ability to instantaneously identify and label tones with their musical note names, without the aid of an external reference tone."
                font.pixelSize: 24
                font.family: "SF Pro Rounded"
                font.weight: Font.Light
                font.capitalization: Font.MixedCase
            }

        }
    }

}

import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: myMainWindow
    width: 480
    height: 800
    visible: true
    title: qsTr("Clock")

    property alias clockFont: buenosAiresRegularFont.name

    FontLoader {
        id: buenosAiresRegularFont
        source: "BuenosAires/BuenosAires-Regular.otf"
    }
    FontLoader {
        id: buenosAiresLightFont
        source: "BuenosAires/BuenosAires-Light.otf"
    }
    FontLoader {
        id: buenosAiresThinFont
        source: "BuenosAires/BuenosAires-Thin.otf"
    }

    Rectangle {
        anchors.fill: parent
        color: "#151B2E"

        // Page Title
        Text {
            id: titleText
            text: qsTr("Clock")
            font.family: clockFont
            font.bold: true
            font.pixelSize: 30
            color: "#9FAAB0"
            anchors.top: parent.top
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Separation Line
        Rectangle {
            id: separationRect
            width: 420
            height: 1
            color: "#9FAAB0"
            anchors.top: titleText.bottom
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Clock Rectangle
        Rectangle {
            width: 444
            height: 390
            radius: 40
            color: "#1B2F46"
            anchors.top: separationRect.bottom
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter

            // Date Text
            Text {
                id: dateText
                text: qsTr(Qt.formatDate(clock.dateTime, "dddd dd MMMM"))
                font.family: clockFont
                font.pointSize: 18
                font.capitalization: Font.Capitalize
                color: "#FCB647"
                anchors.top: parent.top
                anchors.topMargin: 40
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // Time Text
            Text {
                id: timeText
                text: Qt.formatTime(clock.dateTime, "HH:mm")
                font.family: clockFont
                font.pixelSize: 120
                font.weight: Font.Light
                color: "#FCB647"
                anchors.top: dateText.bottom
                anchors.topMargin: 70
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // AM/PM Text
            Text {
                id: amPmText
                text: Qt.formatTime(clock.dateTime, "A")
                font.family: clockFont
                font.pointSize: 20
                color: "#9FAAB0"
                anchors.top: timeText.bottom
                anchors.topMargin: 40
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
}

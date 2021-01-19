import QtQuick 2.12
import Styles 1.0
import DateTimeClock 1.0

Rectangle {
    width: 480
    height: 800

    color: Colors.deepBlue

    // Page Title
    Text {
        id: titleText
        text: qsTr("Clock")
        font.family: FontLoaders.buenosAiresRegularFont
        font.bold: true
        font.pointSize: 25
        color: Colors.gray
        anchors.top: parent.top
        anchors.topMargin: 40
        anchors.horizontalCenter: parent.horizontalCenter
    }

    // Separation Line
    Rectangle {
        id: separationRect
        width: 420
        height: 1
        color: Colors.gray
        anchors.top: titleText.bottom
        anchors.topMargin: 40
        anchors.horizontalCenter: parent.horizontalCenter
    }

    // Clock Rectangle
    Rectangle {
        width: 444
        height: 390
        radius: 40
        color: Colors.lighterDeepBlue
        anchors.top: separationRect.bottom
        anchors.topMargin: 40
        anchors.horizontalCenter: parent.horizontalCenter

        // Date Text
        Text {
            id: dateText
            text: qsTr(Qt.formatDate(Clock.dateTime, "dddd dd MMMM"))
            font.family: FontLoaders.buenosAiresRegularFont
            font.pointSize: 18
            font.capitalization: Font.Capitalize
            color: Colors.yellow
            anchors.top: parent.top
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Time Text
        Text {
            id: timeText
            text: Qt.formatTime(Clock.dateTime, "HH:mm")
            font.family: FontLoaders.buenosAiresRegularFont
            font.pointSize: 90
            font.weight: Font.Light
            color: Colors.yellow
            anchors.top: dateText.bottom
            anchors.topMargin: 70
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // AM/PM Text
        Text {
            id: amPmText
            text: Qt.formatTime(Clock.dateTime, "A")
            font.family: FontLoaders.buenosAiresRegularFont
            font.pointSize: 20
            color: Colors.gray
            anchors.top: timeText.bottom
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}

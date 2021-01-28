import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 480
    height: 800
    visible: true
    title: qsTr("Message Board")

    Rectangle {
        anchors.fill: parent
        color: "dark blue"

        // Page Title
        Text {
            id: titleText
            text: qsTr("MESSAGE BOARD")
            font.pixelSize: 30
            color: "yellow"
            anchors.top: parent.top
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Separation Line
        Rectangle {
            id: topSeparationLine
            width: 420
            height: 1
            color: "grey"
            anchors.top: titleText.bottom
            anchors.topMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Message Text
        Text {
            id: messageText
            text: msgBoard.message
            font.pixelSize: 50
            color: "red"
            anchors.top: topSeparationLine.bottom
            anchors.topMargin: 275
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Separation Line
        Rectangle {
            id: bottomSeparationLine
            width: 420
            height: 1
            color: "grey"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 80
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Message Input
        TextInput {
            id: messageInput
            text: "write your message here"
            font.pixelSize: 25
            color: "gray"
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 40
            anchors.horizontalCenter: parent.horizontalCenter

            onEditingFinished: {
                msgBoard.updateMessage(this.text)
            }
        }
    }
}

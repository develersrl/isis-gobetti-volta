#include "messageboard.h"

MessageBoard::MessageBoard(QObject *parent) : QObject(parent)
{
    // initial message
    msg = "...";
}

QString MessageBoard::currentMessage() {
    return msg;
}

void MessageBoard::updateMessage(QString newMsg) {
    if (newMsg != msg) {
        msg = newMsg;
        emit messageChanged();
    }
}

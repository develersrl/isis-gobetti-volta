#ifndef MESSAGEBOARD_H
#define MESSAGEBOARD_H

#include <QObject>
#include <QString>

class MessageBoard : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString message READ currentMessage NOTIFY messageChanged)

public:
    explicit MessageBoard(QObject *parent = nullptr);

    QString currentMessage();

signals:
    void messageChanged();

public slots:
    void updateMessage(QString newMsg);

private:
        QString msg;
};

#endif // MESSAGEBOARD_H

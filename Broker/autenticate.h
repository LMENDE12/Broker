#ifndef AUTENTICATE_H
#define AUTENTICATE_H

#include <QObject>
#include <QSettings>

class Autenticate : public QObject
{
    Q_OBJECT
public:
    explicit Autenticate(QObject *parent = 0);

signals:

public slots:

private:
    bool setPassword(QByteArray);
    bool setCPF(QString);
    static unsigned int session_id;
    QSettings conf;
};

#endif // AUTENTICATE_H

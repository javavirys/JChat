#ifndef CONSTANTES_H
#define CONSTANTES_H

#include <QObject>
#include <QString>

class cConstantes : public QObject
{
    Q_OBJECT
public:
    explicit cConstantes(QObject *parent = 0);

    static QString server;

signals:

public slots:

};

#endif // CONSTANTES_H

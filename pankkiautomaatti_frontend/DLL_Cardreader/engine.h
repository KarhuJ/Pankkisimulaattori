#ifndef ENGINE_H
#define ENGINE_H
#include <QDebug>
#include <QSerialPort>
#include <QString>


class engine:public QObject
{
    Q_OBJECT
public:
    engine(QObject * parent = nullptr);
    ~engine();
    void open(void);
    void info(void);
private:
    QSerialPort * pQSerialPort;
    QString number;
signals:
    void sendSignalToInterface(QString);
private slots:
    void readPort();
};

#endif // ENGINE_H

#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include "ui_webclient.h"
#include <QDebug>
#include <QAbstractSocket>
#include <QTcpSocket>


class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:
    explicit Webclient(QWidget *parent = nullptr);

private slots:
    void on_gobut_clicked();

private:
    void outputinformation(QString output);
    void socketisconnected();
    void function();

private:
    QTcpSocket *m_socket;
    QString m_hostname;
    const char m_port = 80;

};

#endif // WEBCLIENT_H

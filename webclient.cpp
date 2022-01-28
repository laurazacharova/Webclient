#include "webclient.h"
#include <QDebug>


Webclient::Webclient(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    connect(inputweb, &QLineEdit::returnPressed, this, &Webclient::goButton);
    m_socket = new QTcpSocket(this);
    connect(m_socket, &QTcpSocket::connected, this, &Webclient::socketisconnected);
    connect(m_socket, &QTcpSocket::readyRead, this, &Webclient::function);
}

void Webclient::outputinformation(QString output)
{
    outputinfo->clear();
    outputinfo->setText(output);
}

void Webclient::socketisconnected()
{
    m_socket->write(QString("GET / HTTP/1.1\r\nHost:"+ m_hostname + "\r\n\r\n").toLocal8Bit());
}

void Webclient::function()
{
    qDebug()<<"connected";
    outputinformation(m_socket->readAll());
    m_socket->disconnectFromHost();
}

void Webclient::goButton()
{

    if(!m_socket->waitForConnected(8000))
    {
        outputinfo->setText("NOT CONNECTED!");
    }
    else
    {
        m_socket->connectToHost(inputweb->text(),m_port);
    }
}



#include "webclient.h"
#include <QDebug>


Webclient::Webclient(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

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
    outputinformation(m_socket->readAll());
    m_socket->disconnectFromHost();
}

void Webclient::on_gobut_clicked()
{
    if (!m_socket->waitForConnected(2000))
    {
        outputinfo->setText("Not Connected!");
    }
    /*if(!m_socket->waitForConnected(2000))
    {
        outputinfo->setText("NOT CONNECTED!");
    }
    else
    {
        m_socket->connectToHost(inputweb->text(),m_port);
    }
    */
}



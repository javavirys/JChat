#include "inetutils.h"

cFileDownloader::cFileDownloader(QUrl imageUrl, QObject *parent) :QObject(parent)
{

    connect(&m_WebCtrl, SIGNAL(finished(QNetworkReply*)),
            SLOT(fileDownloaded(QNetworkReply*)));

    QNetworkRequest request(imageUrl);
    m_WebCtrl.get(request);
}

cFileDownloader::~cFileDownloader()
{

}

void cFileDownloader::fileDownloaded(QNetworkReply* pReply)
{
    m_DownloadedData = pReply->readAll();

    //emit a signal
    pReply->deleteLater();
    emit downloaded();
}

QByteArray cFileDownloader::downloadedData() const
{
    return m_DownloadedData;
}

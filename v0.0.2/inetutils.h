#ifndef INETUTILS_H
#define INETUTILS_H

#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class cFileDownloader : public QObject
{
    Q_OBJECT
public:
    explicit cFileDownloader(QUrl , QObject *parent = 0);
    virtual ~cFileDownloader();
    QByteArray downloadedData() const;

signals:
    void downloaded();

private slots:
    void fileDownloaded(QNetworkReply* pReply);

private:
    QNetworkAccessManager m_WebCtrl;

    QByteArray m_DownloadedData;
};

#endif // INETUTILS_H

#ifndef MISSIONNEWREVIEW_H
#define MISSIONNEWREVIEW_H

#include <QWidget>
#include "fileinfo.h"

namespace Ui {
class MissionNewReview;
}

class MissionNewReview : public QWidget
{
    Q_OBJECT

public:
    explicit MissionNewReview(QWidget *parent = nullptr);
    ~MissionNewReview();
    struct MissionNew2
    {
        QString maxing;
        QString malv;
        quint32 zichang;
        quint32 zhenchang;
        QString zhenmazu;
        quint32 zhenmazuchang;
        QString fuzhenfangshi;
        quint32 fuzhenchang;
        quint32 idziweizhi;
        quint32 idzijizhi;
        QString idzijishu;
        QString jiemizhuangtai;
        quint32 xunhuanfuzhenweizhi;
        QString xunhuanfuzhenmazu;
        QString duofuhaojianyan;
        QString tpc;
        QString kuaitongbuzhenmazu;
        quint32 AGC;
        QString zhongpindaikuan;
        quint32 AFC;
        QString AFCmoshi;
        quint32 jiaowucha;
        QString gongzuodianpin;
        QString xinghao;
        QString miaoshu;
        QString biaoshi;
    };
    void setItemByCode(QString code,QString missioncode);
    void setButtonAble(bool isEnable);
    QString fileName;
    quint64 fileSize;

    QString model;
    QString status;
    QString code;

    QString filePath;
    QString modelStatus;

private:
    Ui::MissionNewReview *ui;
public slots:
    void selectFile();
    void sendFile();

signals:
    void sendFileInfo(FileInfo*);

};

#endif // MISSIONNEWREVIEW_H
